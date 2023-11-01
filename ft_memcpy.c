/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:45:12 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/09 07:17:24 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;

	i = 0;
	if (!destination && !source)
	{
		return (0);
	}
	while (i < size)
	{
		((char *)destination)[i] = ((const char *)source)[i];
		i++;
	}
	return (destination);
}
