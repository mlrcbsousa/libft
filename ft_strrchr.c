/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:52:48 by manuel            #+#    #+#             */
/*   Updated: 2021/03/03 22:52:50 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	k;
	char	*s;
	int		i;

	k = (char)c;
	s = (char *)str;
	i = ft_strlen(s);
	while (i != 0 && s[i] != k)
		i--;
	if (s[i] == k)
		return (s + i);
	return (NULL);
}
