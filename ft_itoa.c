/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:51:13 by msousa            #+#    #+#             */
/*   Updated: 2021/04/14 18:46:03 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_declen(size_t n, size_t len)
{
	if (n > 9)
		return (ft_declen(n / 10, len + 1));
	return (len);
}

static void	ft_decstr(char *str, long long n)
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
