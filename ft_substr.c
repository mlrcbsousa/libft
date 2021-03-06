/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:13:36 by manuel            #+#    #+#             */
/*   Updated: 2021/03/06 20:37:34 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 			*str;
	const char		*save;
	unsigned int	i;

	i = 0;
	while (i++ < start)
		s++;
	i = 0;
	save = s;
	while (*s && i++ < len)
		s++;
	str = (char *)malloc(sizeof(*s) * (i + 1));
	ft_strlcpy(str, save, i + 1);
	return (str);
}
