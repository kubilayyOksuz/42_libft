/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koksuz <koksuz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:59:20 by koksuz            #+#    #+#             */
/*   Updated: 2024/10/21 19:58:54 by koksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char sep)
{
	int	index;
	int	counter;

	index = 0;
	counter = 0;
	while (s[index])
	{
		while (s[index] == sep)
			index++;
		if (s[index])
		{
			counter++;
			while (s[index] != sep && s[index])
				index++;
		}
	}
	return (counter);
}

size_t static	get_word_len(char const *s, char sep)
{
	if (ft_strchr(s, sep) == NULL)
		return (ft_strlen(s));
	return (ft_strchr(s, sep) - s);
}

void static	free_split(char **list)
{
	int	index;

	index = 0;
	while (list[index])
	{
		free(list[index]);
		index++;
	}
	free(list);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		index;

	index = 0;
	list = (char **)malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (!s || !list)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			list[index] = ft_substr(s, 0, get_word_len(s, c));
			if (!list[index])
			{
				free_split(list);
				return (NULL);
			}
			index++;
		}
		s += get_word_len(s, c);
	}
	list[index] = NULL;
	return (list);
}
