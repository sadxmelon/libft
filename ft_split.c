/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:32:39 by aalghfel          #+#    #+#             */
/*   Updated: 2022/09/27 15:11:46 by aalghfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

char	*word_dup(const char *str, int start, int finish)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(finish - start + 1);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	k = 0;
	str = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!str || !s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && s[i] && j < i)
			j = i;
		else if ((s[i] == c || !s[i]) && j == i)
		{
			str[k++] = word_dup(s, j, i);
		}
		i++;
	}
	str[word_count(s, c)] = 0;
	return (str);
}
