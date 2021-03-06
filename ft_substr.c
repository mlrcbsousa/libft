/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:13:36 by manuel            #+#    #+#             */
/*   Updated: 2021/03/06 22:17:46 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 			*str;
	const char		*save;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (start--)
		s++;
	i = 0;
	save = s;
	while (*s && i < len)
	{
		s++;
		i++;
	}
	if (!(str = (char *)malloc(sizeof(*s) * (i + 1))))
		return (NULL);
	ft_strlcpy(str, save, i + 1);
	return (str);
}
