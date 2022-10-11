/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:14:26 by aalghfel          #+#    #+#             */
/*   Updated: 2022/10/11 19:16:02 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	digit;
	long long	temp;

	i = 0;
	sign = 1;
	digit = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = -(str[i] == '-') + (str[i] == '+');
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		temp = digit;
		digit = digit * 10 + str[i++] - '0';
		if (temp != digit / 10)
			return (-1 * ((sign ^ (-1)) != 0));
	}
	return (sign * digit);
}
