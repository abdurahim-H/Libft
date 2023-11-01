/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:52:45 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/09 19:54:33 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t maxlen)
{
	size_t	i;

	i = 0;
	if (maxlen == 0)
	{
		return (0);
	}
	while ((str1[i] != '\0' && str2[i] != '\0') && maxlen > 01)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
		maxlen--;
	}
	if (maxlen > 0)
	{
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
