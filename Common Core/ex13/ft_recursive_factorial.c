int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	nb_iterative_factorial;

	nb_iterative_factorial = 0;
	nb_iterative_factorial = nb;
	while(nb-- >= 1)
	{
		nb_iterative_factorial = ft_recursive_factorial(nb - 1);
	}

	return nb_iterative_factorial;
}