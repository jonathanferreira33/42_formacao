#include "libft.h"

static int	num_lenght(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	number;
	int		lenght;

	number = n;
	lenght = num_lenght(number);
	str = ft_calloc(lenght + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	if (number == 0)
		str[0] = '0';
	while (number > 0)
	{
		str[--lenght] = (number % 10) + '0';
		number /= 10;
	}
	return (str);
}