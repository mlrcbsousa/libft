/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:58:00 by manuel            #+#    #+#             */
/*   Updated: 2021/03/03 22:58:02 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_magnitude_order(int c)
{
	int	len;
	int tmp;

	len = 0;
	tmp = c;
	while ((c > 0 && tmp > 0) || (c < 0 && tmp < 0))
	{
		len++;
		tmp = tmp / 10;
	}
	return (len);
}

static int	ft_isnegative(int c)
{
	return (c < 0 ? 1 : 0);
}

char		*ft_itoa(int n)
{
	char	*ito;
	int		negative;
	int		magnitude;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if ((negative = ft_isnegative(n)))
		n = -n;
	magnitude = ft_magnitude_order(n) + negative;
	if (!(ito = (char*)malloc(sizeof(char) * (magnitude + 1))))
		return (NULL);
	ito[magnitude] = '\0';
	while (magnitude > 0 && n > 0)
	{
		magnitude--;
		ito[magnitude] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		ito[0] = '-';
	return (ito);
}
