/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:54:07 by abhudulo          #+#    #+#             */
/*   Updated: 2023/11/01 20:32:32 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_isprint(int n);
int		ft_isdigit(int n);
int		ft_isascii(int n);
int		ft_isalpha(int a);
int		ft_isalnum(int a);
void	*ft_memset(void *s, int ch, size_t length);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strchr(const char *str, int ch);
int		ft_strncmp(const char *str1, const char *str2, size_t maxlen);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *buf, int c, size_t count);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t count);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t number_of_block, size_t size_of_block);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_memcmp(void *str1, void *str2, size_t n);
void *ft_memalloc(size_t size);
void ft_putchar(char c);
void ft_putnbr(int n);
void ft_putstr(char const *s);
void ft_striter(char *s, void (*f)(char *));
char **ft_strsplit(char const *s, char c);
char *ft_strsub(char const *s, unsigned int start, size_t len);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);

#endif