/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:50:13 by manuel            #+#    #+#             */
/*   Updated: 2021/03/11 23:44:31 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buf;

	if (dest == src || !n)
		return (dest);
	buf = (char *)dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (buf);
}
