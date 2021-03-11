/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:22:32 by manuel            #+#    #+#             */
/*   Updated: 2021/03/11 21:24:36 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int	wc;

	wc = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		if (*s)
			wc++;
		s = ft_strchr(s, c);
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	**buf;
	char	*next;

	strs = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(*strs));
	buf = strs;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			next = ft_strchr(s, c);
			if (!next || !c)
			{
				next = (char *)s;
				while (*next)
					next++;
			}
			*strs++ = ft_substr(s, 0, next - s);
			s = next;
		}
	}
	*strs = 0;
	return (buf);
}
