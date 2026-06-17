#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}   t_list;

int		ft_isascii(char arg);
int		ft_isalnum(char arg);
int		ft_isalpha(char arg);
int		ft_isdigit(char arg);
int		ft_isprint(char arg);
int		ft_tolower(int arg);
int		ft_toupper(int arg);
int		ft_strlen(char *arg);
int		ft_strncmp(char *arg1, char *arg2, size_t max);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(char *arg, int c);
char	*ft_strrchr(char *arg, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strcat(char *dest, char *src);
char	*ft_strdup(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

#endif