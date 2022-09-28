/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:46:00 by aalghfel          #+#    #+#             */
/*   Updated: 2022/09/28 10:04:21 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*sub;

	sub = malloc(len + 1);
	if (!sub)
		return (0);
	if (ft_strlen(s) <= start)
	{
		sub[0] = 0;
		return (sub);
	}
	j = 0;
	while (s[start] && j < len)
		sub[j++] = s[start++];
	sub[j] = 0;
	return (sub);
}
