/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koksuz <koksuz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:01:24 by koksuz            #+#    #+#             */
/*   Updated: 2024/10/26 17:18:23 by koksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_num(int n)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
		return (11);
	else if (n == 0)
		return (1);
	else if (n < 0)
	{
		n *= -1;
		counter++;
	}
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			num_counter;
	long int	n_copy;

	num_counter = count_num(n);
	n_copy = n;
	str = (char *)malloc(num_counter + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		n_copy *= -1;
	*(str + num_counter) = 0;
	while (num_counter--)
	{
		*(str + num_counter) = n_copy % 10 + '0';
		n_copy = n_copy / 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
