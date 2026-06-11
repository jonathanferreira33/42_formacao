# ifndef LIBFT_H

#define LIBFT_H

#include <stddef.h>

int		isascii(char arg);
int		isalnum(char arg);
int		isalpha(char arg);
int		isdigit(char arg);
int		isprint(char arg);
int		tolower(int arg);
int		toupper(int arg);
int		strlen(char *arg);
char	*strchr(char *arg, int c);
char	*strrchr(char *arg, int c);
int		strncmp(char *arg1, char *arg2, size_t max);
char	*strnstr(const char *str, const char *to_find, size_t len);
char	*strcat(char *dest, char *src);
size_t	strlcat(char *dest, const char *src, size_t size);
int		atoi(const char *str);
char	*strdup(const char *s);
void	*memset(void *s, int c, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);

void	*calloc(size_t nmemb, size_t size);
void	bzero(void *s, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);