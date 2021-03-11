/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:59:42 by manuel            #+#    #+#             */
/*   Updated: 2021/03/11 23:24:57 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*buf;

	if (!*s2)
		return ((char *)s1);
	while (*s1 && n)
	{
		buf = (char *)s2;
		if (*s1 == *s2)
		{
			while (*s2
				&& *(s1 + (s2 - buf)) == *s2
				&& (size_t)(s2 - buf) < n)
				s2++;
			if (!*s2)
				return ((char *)s1);
			s2 = buf;
		}
		n--;
		s1++;
	}
	return (NULL);
}
