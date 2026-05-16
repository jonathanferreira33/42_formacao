int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	int	base;

	base = 1;
	while((base * base) < nb)
	{
		base++;
	}
	if (base * base == nb)
		return base;
	else
		return (0);
}

#include <stdio.h>
#include <math.h>
int main (void)
{
	printf("ft_sqrt = %d | sqrt = %f\n", ft_sqrt(25), sqrt(25));
}