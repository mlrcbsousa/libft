/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:52:33 by manuel            #+#    #+#             */
/*   Updated: 2021/03/03 22:52:35 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*map;

	i = 0;
	map = NULL;
	if (!s || !f)
		return (NULL);
	if (!(map = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			map[i] = (*f)(i, s[i]);
			i++;
		}
		map[i] = '\0';
	}
	return (map);
}
