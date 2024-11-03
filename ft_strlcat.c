/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koksuz <koksuz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:22:22 by koksuz            #+#    #+#             */
/*   Updated: 2024/10/15 21:07:16 by koksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	index;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dstsize <= dst_length)
	{
		return (src_length + dstsize);
	}
	index = 0;
	while (src[index] != '\0' && dst_length + index < dstsize - 1)
	{
		dst[dst_length + index] = src[index];
		index++;
	}
	dst[index + dst_length] = '\0';
	return (dst_length + src_length);
}
