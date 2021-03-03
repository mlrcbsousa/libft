/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 22:20:14 by aclecler          #+#    #+#             */
/*   Updated: 2018/06/23 22:20:17 by aclecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (t_list *elem))
{
	t_list *nxtlst;

	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst);
		nxtlst = lst->next;
		lst = nxtlst;
	}
}
