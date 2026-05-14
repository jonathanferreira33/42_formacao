int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	nb_iterative_factorial;

	if (nb <= 1)
		return (0);
	nb_iterative_factorial = nb;
	while(nb > 1)
	{
		nb_iterative_factorial *= (nb - 1);
		nb--;
	}

	return nb_iterative_factorial;
}

// #include<stdio.h>
// int	main(void)
// {
// 	int nbx = 5;
// 	printf("Resultado = %d", ft_iterative_factorial(nbx));
// }