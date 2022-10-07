/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:32:39 by aalghfel          #+#    #+#             */
/*   Updated: 2022/10/06 20:54:05 by aalghfel         ###   ########.fr       */
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

static int	word_len(char const *str, char sep)
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
	int		j;
	char	**str;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	str = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!str)
		return (0);
	while (i < word_count(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		if (!s[j])
			break ;
		str[i++] = ft_substr(s, j, word_len(s + j, c));
		j += word_len(s + j, c);
	}
	str[i] = 0;
	return (str);
}
