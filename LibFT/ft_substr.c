#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t 	str_length;

	if (!s)
		return (NULL);
	str_length = ft_strlen(s);
	if (start >= str_length)
		return (ft_strdup(""));
	if (len > str_length - start)
		len = str_length - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
