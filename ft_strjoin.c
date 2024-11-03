/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koksuz <koksuz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:03:13 by koksuz            #+#    #+#             */
/*   Updated: 2024/10/16 20:21:40 by koksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	str_index;
	size_t	s1_len;
	size_t	s2_len;
	char	*str;

	str_index = 0;
	index = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc((s1_len + s2_len + 1));
	if (!str || !s1 || !s2)
	{
		return (NULL);
	}
	while (s1[index])
		str[str_index++] = s1[index++];
	index = 0;
	while (s2[index])
		str[str_index++] = s2[index++];
	str[str_index] = '\0';
	return (str);
}
