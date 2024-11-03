/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koksuz <koksuz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:54:07 by koksuz            #+#    #+#             */
/*   Updated: 2024/10/18 19:04:48 by koksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;
	char	*dest;
	char	*source;

	index = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (!dest && !source)
		return (NULL);
	if (dest > source)
	{
		while (len-- > 0)
			dest[len] = source[len];
	}
	else
	{
		while (index < len)
		{
			dest[index] = source[index];
			index++;
		}
	}
	return (dst);
}
