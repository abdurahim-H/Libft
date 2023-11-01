/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:35:37 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/09 07:18:40 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t		i;
	char		*t_src;
	char		*t_dest;

	i = 0;
	t_src = (char *)src;
	t_dest = (char *)dest;
	if (t_dest == NULL && t_src == NULL)
	{
		return (dest);
	}
	if (t_dest > t_src)
	{
		while (count > 0)
		{
			t_dest[count - 1] = t_src[count - 1];
			count--;
		}
	}
	while (i < count)
	{
		t_dest[i] = t_src[i];
		i++;
	}
	return (dest);
}
