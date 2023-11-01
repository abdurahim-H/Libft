/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:26:25 by abhudulo          #+#    #+#             */
/*   Updated: 2023/11/01 20:26:51 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
static int count_words(char const *s, char c)
{
	int count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return count;
}

char **ft_strsplit(char const *s, char c)
{
	char **tab;
	int i = 0;
	int j = 0;
	int k = 0;

	if (!s || !(tab = (char **)malloc(sizeof(*tab) * (count_words(s, c) + 1))))
		return NULL;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			if (!(tab[j] = (char *)malloc(sizeof(**tab) * (strlen(&s[i]) + 1))))
				return NULL;
			while (s[i] != c && s[i] != '\0')
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
			k = 0;
		}
	}
	tab[j] = NULL;
	return tab;
}
