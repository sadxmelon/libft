/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:42:21 by aalghfel          #+#    #+#             */
/*   Updated: 2022/09/29 09:51:40 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new;
// 	t_list	*first;

// 	if (!lst)
// 		return (0);
// 	new = ft_lstnew(f(lst->content));
// 	if (!new)
// 		return (0);
// 	first = new;
// 	while (lst)
// 	{
// 		new->next = ft_lstnew(f(lst->content));
// 		if (!new)
// 		{
// 			ft_lstclear(&new, del);
// 			return (0);
// 		}
// 		new = new->next;
// 		lst = lst->next;
// 	}
// 	new->next = 0;
// 	return (first);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*item;

	new_list = 0;
	if (!lst || !f)
		return (0);
	while (lst)
	{
		item = ft_lstnew((*f)(lst->content));
		if (item)
			ft_lstadd_back(&new_list, item);
		else
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		lst = lst->next;
	}
	return (new_list);
}
