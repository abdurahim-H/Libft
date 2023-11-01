/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:18:56 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/10 12:09:16 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number_of_block, size_t size_of_block)
{
	size_t	total_block_size;
	int		*c_block;

	total_block_size = number_of_block * size_of_block;
	c_block = malloc(total_block_size);
	if (c_block == NULL)
		return (NULL);
	ft_memset(c_block, 0, total_block_size);
	return (c_block);
}
