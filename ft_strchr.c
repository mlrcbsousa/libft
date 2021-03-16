/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:55:27 by manuel            #+#    #+#             */
/*   Updated: 2021/03/16 23:01:38 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
		if (*str++ == (char)c)
			return ((char *)(str - 1));
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}
