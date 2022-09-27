/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:03:01 by aalghfel          #+#    #+#             */
/*   Updated: 2022/09/27 10:41:34 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		len;
	size_t	i;

	i = 0;
	len = ft_strlen(dst);
	while (dstsize - 1 - len - i && src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[dstsize] = 0;
	while (src[i])
		i++;
	return (i + len);
}
