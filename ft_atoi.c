/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:53:31 by manuel            #+#    #+#             */
/*   Updated: 2021/03/03 22:53:34 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_return(int c, unsigned long long ret, int neg)
{
	if (c >= 19)
		return (neg == -1 ? 0 : -1);
	if (ret > 9223372036854775807)
		return (neg == 1 ? 0 : -1);
	else
		return (ret * neg);
}

int			ft_atoi(const char *str)
{
	unsigned long long	negative;
	int					i;
	int					count;
	unsigned long long	number;

	negative = 1;
	i = 0;
	number = 0;
	count = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		number = (number * 10) + str[i] - '0';
		count++;
		i++;
	}
	return (ft_return(count, number, negative));
}
