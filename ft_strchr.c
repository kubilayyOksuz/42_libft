/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koksuz <koksuz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:47:09 by koksuz            #+#    #+#             */
/*   Updated: 2024/10/16 17:33:13 by koksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != '\0' && s[index] != (char)c)
	{
		index++;
	}
	if (s[index] == (char)c)
	{
		return ((char *)s + index);
	}
	return ((char *) 0);
}
