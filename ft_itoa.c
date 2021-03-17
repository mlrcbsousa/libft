/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:58:00 by manuel            #+#    #+#             */
/*   Updated: 2021/03/17 22:55:55 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_declen(size_t n, size_t len)
{
	if (n > 9)
		return (ft_declen(n / 10, len + 1));
	return (len);
}

void	ft_decstr(char *str, long long n)
{
	if (n > 9)
		ft_decstr(str - 1, n / 10);
	*str = n % 10 + 48;
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	n_ll;
	size_t		len;

	n_ll = (long long)n;
	if (n < 0)
		n_ll = -n_ll;
	len = ft_declen(n_ll, 1);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		*str = '-';
	ft_decstr(str + len - 1, n_ll);
	*(str + len) = '\0';
	return (str);
}
