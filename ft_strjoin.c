/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:21:08 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/11 18:13:36 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*fresh;
	unsigned int		i;
	unsigned int		j;
	size_t				len1;
	size_t				len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	fresh = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if ((s1 == NULL) || (s2 == NULL) || (fresh == NULL))
		return (NULL);
	while (i < len1)
	{
		fresh[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		fresh[i + j] = s2[j];
		j++;
	}
	fresh[i + j] = '\0';
	return (fresh);
}
