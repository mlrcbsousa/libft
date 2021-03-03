/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:55:27 by manuel            #+#    #+#             */
/*   Updated: 2021/03/03 22:55:30 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	k;
	char	*s;
	int		i;

	k = (char)c;
	i = 0;
	s = (char *)str;
	while (s[i])
	{
		if (s[i] == k)
			return (s + i);
		i++;
	}
	if (s[i] == k)
		return (s + i);
	return (NULL);
}
