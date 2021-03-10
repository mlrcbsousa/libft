/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:22:32 by manuel            #+#    #+#             */
/*   Updated: 2021/03/10 19:38:58 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**strs;
	char	*buf;
	int		wc;

	if (!s)
		return (NULL);
	wc = 0;
	while ((buf = ft_strchr(buf, c)))
		;
	return ((char **)malloc(1));
}
