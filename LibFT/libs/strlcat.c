#include "libft.h"

unsigned int	strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	count_dest;
	unsigned int	count_src;
	unsigned int	count;

	count_dest = 0;
	count_src = 0;
	count = 0;
	while (dest[count_dest] != '\0' && count_dest < size)
		count_dest++;
	while (src[count_src] != '\0')
		count_src++;
	if (size <= count_dest)
		return (size + count_src);
	while (src[count] != '\0' && (count_dest + count + 1) < size)
	{
		dest[count_dest + count] = src[count];
		count++;
	}
	dest[count_dest + count] = '\0';
	return (count_dest + count_src);
}
