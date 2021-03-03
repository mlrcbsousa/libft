/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 16:29:05 by aclecler          #+#    #+#             */
/*   Updated: 2018/06/23 22:20:43 by aclecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*result;
	t_list	*first;
	t_list	*fres;

	if (!f || !lst)
		return (NULL);
	fres = f(lst);
	if (!(result = ft_lstnew(fres->content, fres->content_size)))
		return (NULL);
	first = result;
	lst = lst->next;
	while (lst)
	{
		fres = f(lst);
		if (!(result->next = ft_lstnew(fres->content, fres->content_size)))
			return (NULL);
		result = result->next;
		lst = lst->next;
	}
	return (first);
}
