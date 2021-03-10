/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:22:32 by manuel            #+#    #+#             */
/*   Updated: 2021/03/10 23:58:28 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_wordlen(char const *word, char c)
{
	int	length;

	length = 0;
	while (*word && *word != c)
	{
		word++;
		length++;
	}
	return (length);
}

int	ft_wordcount(char const *s, char c)
{
	int	wc;

	wc = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		s = ft_strchr(s, c);
		if (s)
			wc++;
	}
	printf("%d\n", wc);
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	**buf;
	//int		wl;
	char	*next;

	strs = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(*strs));
	if (!strs)
		return (NULL);
	buf = strs;
	while (s && *s)
	{
		while (*s == c)
			s++;
		next = ft_strchr(s, c);
		if (!next)
		{
			next = (char *)s;
			while (*next)
				next++;
		}
		*strs = ft_substr(s, 0, (next - s)); 
		s = next;
		strs++;
	}
	//strs--;
	*strs = 0;
	return (buf);
}
