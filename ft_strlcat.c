/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:10:26 by msousa            #+#    #+#             */
/*   Updated: 2021/04/12 23:10:32 by msousa           ###   ########.fr       */
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
