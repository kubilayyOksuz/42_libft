/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koksuz <koksuz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:35:32 by koksuz            #+#    #+#             */
/*   Updated: 2024/10/27 11:02:36 by koksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	if (ft_strlen(s) - start <= len)
	{
		str = (char *)malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
		if (str == NULL)
			return (NULL);
		ft_strlcpy(str, s + start, ft_strlen(s) - start + 1);
		return (str);
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
