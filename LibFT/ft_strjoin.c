#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	phrase_length;
	char	*str_join;

	if (!s1 || !s2)
		return (NULL);
	phrase_length = ft_strlen(s1) + ft_strlen(s2) + 1;
	str_join = malloc(phrase_length);
	if (!str_join)
		return (NULL);
	str_join[0] = '\0';
	ft_strlcat(str_join, s1, phrase_length);
	ft_strlcat(str_join, s2, phrase_length);
	return (str_join);
}