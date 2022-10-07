/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:08:31 by aalghfel          #+#    #+#             */
/*   Updated: 2022/10/06 18:18:20 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dup;

	size = ft_strlen(src);
	dup = malloc(size + 1);
	if (!dup)
		return (0);
	i = -1;
	while (src[++i])
		dup[i] = src[i];
	dup[i] = 0;
	return (dup);
}
