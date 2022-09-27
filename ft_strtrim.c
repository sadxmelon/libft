/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:38:34 by aalghfel          #+#    #+#             */
/*   Updated: 2022/09/27 18:16:38 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	len = ft_strlen(s1);
	if(!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr((char *)s1, 0, len + 1));
}
