/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:48:12 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/11 18:41:14 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	len_little;
// 	size_t	j;

// 	i = 0;
// 	len_little = 0;
// 	j = 0;
// 	while (little[len_little] != '\0')
// 		len_little++;
// 	if (len_little == 0)
// 		return ((char *)big);
// 	while (i < len)
// 	{
// 		if (i + len_little > len)
// 			return (NULL);
// 		while (big[i + j] == little[j] && j < len_little)
// 			j++;
// 		if (j == len_little)
// 			return ((char *)(big + i));
// 		i++;
// 	}
// 	return (NULL);
// }

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	len_little;
// 	size_t	j;

// 	i = 0;
// 	len_little = 0;
// 	j = 0;
// 	if (big == NULL || little == NULL)
// 		return (NULL);
// 	while (little[len_little] != '\0')
// 		len_little++;
// 	if (len_little == 0)
// 		return ((char *)big);
// 	while (i < len)
// 	{
// 		if (i + len_little > len)
// 			return (NULL);
// 		while (big[i + j] == little[j] && j < len_little)
// 			j++;
// 		if (j == len_little)
// 			return ((char *)(big + i));
// 		i++;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size;

	if (*little == 0)
		return ((char *)big);
	size = ft_strlen(little);
	while (*big && size <= len)
	{
		if (*big == *little && ft_strncmp(big, little, size) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
