/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:46:00 by aalghfel          #+#    #+#             */
/*   Updated: 2022/09/27 15:15:26 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	sub = malloc(len + 1);
	if (!sub)
		return (0);
	i = start;
	j = 0;
	while (s[i] && j < len)
		sub[j++] = s[i++];
	sub[j] = 0;
	return (sub);
}
