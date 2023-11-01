/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:53:46 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/07 16:56:05 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *str1, void *str2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((char *)str1)[i] != ((char *)str2)[i])
		{
			diff = ((unsigned char *)str1)[i] - ((unsigned char *)str2)[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
