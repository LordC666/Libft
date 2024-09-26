/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:25:56 by cnieto            #+#    #+#             */
/*   Updated: 2024/09/26 15:02:25 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				**ft_split(char const *s, char c);
int					ft_strlen(const char *str);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
int					*ft_tolower(int c);
int					*ft_toupper(int c);
unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
int					ft_atoi(char *str);
char				*ft_strnstr(const char *str, const char *to_find,
						size_t len);
void				*ft_memset(void *s, int c, size_t n);
void				bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_calloc(size_t number, size_t size);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **list, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);

#endif
