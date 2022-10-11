/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:14:47 by aalghfel          #+#    #+#             */
/*   Updated: 2022/10/10 12:46:41 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	maxmembers;

	if (!size || !nmemb)
		return (malloc(0));
	maxmembers = SIZE_MAX / size;
	if (nmemb > maxmembers)
		return (0);
	result = malloc(size * nmemb);
	if (!result)
		return (0);
	ft_bzero(result, size * nmemb);
	return (result);
}
