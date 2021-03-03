/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:15:14 by manuel            #+#    #+#             */
/*   Updated: 2021/03/04 00:20:57 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ret;
	
	if (INT_MAX / size < nmemb)
		return (NULL);
	ret = malloc(nmemb * size);
    if (ret)  
        ft_memset(ret, 0, nmemb * size);
    return ret;
}
