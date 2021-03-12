/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:48:35 by manuel            #+#    #+#             */
/*   Updated: 2021/03/12 22:34:40 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*buf;

	buf = src;
	if (src && dst && size)
	{
		while (*src && --size)
			*dst++ = *src++;
		*dst = 0;
	}
	return (ft_strlen(buf));
}
