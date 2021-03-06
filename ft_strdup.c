/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:59:12 by manuel            #+#    #+#             */
/*   Updated: 2021/03/06 11:51:51 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*buf;

	buf = dst;
	while (*src)
		*buf++ = *src++;
	*buf = '\0';
	return (dst);
}

char	*ft_strdup(const char *src)
{
	char	*str;

	if (!(str = malloc(sizeof(*src) * (ft_strlen(src) + 1))))
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strcpy(str, src);
	return (str);
}
