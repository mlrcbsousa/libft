/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:55:45 by manuel            #+#    #+#             */
/*   Updated: 2021/03/16 22:52:26 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;

	length = ft_strlen(src);
	while (*dst++ && size && --size + 1)
		length++;
	dst--;
	while (*src && size && --size)
		*dst++ = *src++;
	if (size)
		*dst = '\0';
	return (length);
}
