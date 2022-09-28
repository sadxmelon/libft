/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:22:32 by aalghfel          #+#    #+#             */
/*   Updated: 2022/09/28 18:27:10 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	t_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(lst);
	last->next = new;
}
