void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include<stdio.h>
int	main (void)
{
	int a = 10;
	int b = 4;
	int c = 0;
	int d = 0;
	int *div = &c;
	int *mod = &d;
	ft_div_mod(a, b, div, mod);
	printf("div = %d, mod = %d ", *div, *mod);
}