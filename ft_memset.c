/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:56:57 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/09 07:20:07 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int ch, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		((unsigned char *)s)[i] = (unsigned char)ch;
		i++;
	}
	return (s);
}
