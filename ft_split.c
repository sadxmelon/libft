/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:32:39 by aalghfel          #+#    #+#             */
/*   Updated: 2022/09/28 12:16:01 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	i;
	int	sep;

	i = 0;
	sep = 0;
	while (*str)
	{
		if (*str != c && sep == 0)
		{
			sep = 1;
			i++;
		}
		else if (*str == c)
			sep = 0;
		str++;
	}
	return (i);
}

int	word_len(char const *str, char sep)
{
	int	n;

	n = 0;
	while (str[n] && str[n] != sep)
		n++;
	return (n);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;

	i = 0;
	str = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!str || !s)
		return (0);
	while (i < word_count(s, c))
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		str[i++] = ft_substr(s, 0, word_len(s, c));
		s += word_len(s, c);
	}
	str[i] = 0;
	return (str);
}
