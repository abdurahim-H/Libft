/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:36:36 by abhudulo          #+#    #+#             */
/*   Updated: 2023/11/01 20:02:26 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	total_size(int long number, int n_sign)
{
	size_t	size;

	size = 0;
	if (number == 0)
		size += 1;
	while (number != 0)
	{
		number /= 10;
		size++;
	}
	if (n_sign == -1)
	{
		size += 1;
	}
	return (size);
}

static char	*numbers_to_string(long b, int sign, int size)
{
	char	*str;
	int		i;

	i = size - 1;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (sign == -1)
	{
		str[0] = '-';
	}
	if (b == 0)
	{
		str[0] = '0';
		i--;
	}
	while (b != 0)
	{
		str[i] = (b % 10) + '0';
		i--;
		b /= 10;
	}
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	b;
	int		sign;
	int		size;

	sign = 1;
	b = (long)n;
	if (n < 0)
	{
		sign = -1;
		b = -b;
	}
	size = total_size(n, sign);
	str = numbers_to_string(b, sign, size);
	return (str);
}
