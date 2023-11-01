/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:44:33 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/09 15:32:06 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != (unsigned char)ch && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == (unsigned char)ch)
		return ((char *)(str + i));
	else
		return (NULL);
}
