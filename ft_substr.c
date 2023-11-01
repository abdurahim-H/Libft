/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:07:40 by abhudulo          #+#    #+#             */
/*   Updated: 2023/11/01 20:03:18 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *substr;
    i = 0;
    substr = malloc((len + 1) * sizeof(char));
    if (len > ft_strlen(&s[start]))
        len = ft_strlen(&s[start]);
    if (!substr)
        return (NULL);
    if (*s == 0 || start >= ft_strlen(s) || len == 0)
        substr[i] = 0;
    while (s[start] != 0 && len > 0 && ft_strlen(s) > 0)
    {
        substr[i] = s[start];
        i++;
        start++;
        len--;
    }
    substr[i] = 0;
    return (substr);
}
