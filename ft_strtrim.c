/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:56:24 by manuel            #+#    #+#             */
/*   Updated: 2021/03/03 22:56:26 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s)
{
	size_t	i;
	size_t	cw;

	i = 0;
	cw = 0;
	while (s[i] != '\0')
	{
		if (((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n') &&
					(s[i] > 32)) || (s[0] > 32 && i == 0))
			cw++;
		i++;
	}
	return (cw);
}

static size_t	ft_lentrim(char const *s)
{
	size_t	i;
	size_t	len;
	size_t	cw;

	i = 0;
	len = 0;
	cw = ft_count_words(s);
	if (!s)
		return (0);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] && cw > 0)
	{
		if (((s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\n'
						|| s[i + 1] == '\0') && (s[i] > 32)))
			cw--;
		i++;
		len++;
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	l_trim;
	char	*trim;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	l_trim = ft_lentrim(s);
	trim = NULL;
	if (!(trim = (char*)malloc(sizeof(char) * (ft_lentrim(s) + 1))))
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] && l_trim > 0)
	{
		trim[j] = s[i];
		i++;
		j++;
		l_trim--;
	}
	trim[j] = '\0';
	return (trim);
}
