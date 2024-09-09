# ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_isalnum(char *str); 
int		ft_isalpha(char *str);
int		ft_isascii(char *str);
int		ft_isdigit(char *str);
int		ft_isprint(char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_atoi(char *str);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t number, size_t size);
char *ft_strdup(const char *str);

# endif