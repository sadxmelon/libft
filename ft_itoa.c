/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:13:23 by aalghfel          #+#    #+#             */
/*   Updated: 2022/10/07 18:38:31 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	if (n == (int)0x80000000)
		return (10);
	if (n < 0)
		n = -n;
	if (n < 10)
		return (1);
	if (n < 100)
		return (2);
	if (n < 1000)
		return (3);
	if (n < 10000)
		return (4);
	if (n < 100000)
		return (5);
	if (n < 1000000)
		return (6);
	if (n < 10000000)
		return (7);
	if (n < 100000000)
		return (8);
	if (n < 1000000000)
		return (9);
	return (10);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		i;
	long int	num;

	num = n;
	i = len(n);
	if (n < 0)
	{
		num *= -1;
		i++;
	}
	str = malloc(i + 1);
	if (!str)
		return (0);
	str[i] = 0;
	while (i--)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (&str[0]);
}
