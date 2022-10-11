/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:48:20 by aalghfel          #+#    #+#             */
/*   Updated: 2022/10/11 19:40:27 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!haystack)
		return (0);
	if (!needle)
		return ((char *)haystack);
	if (ft_strlen(needle) == 0 || haystack == needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		while (haystack[i + n] && needle[n] && haystack[i + n] == needle[n])
			n++;
		if (n == ft_strlen(needle) && n + i < len)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (0);
}
