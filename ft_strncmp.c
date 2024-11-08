/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koksuz <koksuz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:27:26 by koksuz            #+#    #+#             */
/*   Updated: 2024/10/16 15:09:04 by koksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[index] && s2[index] && s1[index] == s2[index] && index < n - 1)
	{
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
