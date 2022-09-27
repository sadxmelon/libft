/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:48:20 by aalghfel          #+#    #+#             */
/*   Updated: 2022/09/27 18:16:39 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (ft_strlen(needle) == 0 || haystack == needle)
		return (0);
	while (haystack[i] && i < len)
	{
		n = 0;
		while (haystack[i + n] && needle[n] && haystack[i + n] == needle[n])
			n++;
		if (n == ft_strlen(needle))
			return (&((char *)haystack)[i]);
		i++;
	}
	return (0);
}
