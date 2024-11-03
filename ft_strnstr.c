/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koksuz <koksuz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:03:32 by koksuz            #+#    #+#             */
/*   Updated: 2024/10/17 17:59:11 by koksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	index2;

	index = 0;
	if (needle[index] == '\0')
		return ((char *)haystack);
	while (haystack[index])
	{
		index2 = 0;
		while (haystack[index + index2] == needle[index2]
			&& (index + index2) < len)
		{
			if (haystack[index + index2] == '\0' && needle[index2] == '\0')
			{
				return ((char *)haystack + index);
			}
			index2++;
			if (needle[index2] == '\0')
			{
				return ((char *)haystack + index);
			}
		}
		index++;
	}
	return (NULL);
}
