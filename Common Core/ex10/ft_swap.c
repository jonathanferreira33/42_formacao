void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	number_temp;
	
	number_temp = *a;

	*a = *b;
	*b = number_temp;
}

// #include<stdio.h>
// int	main (void)
// {
// 	int a = 1;
// 	int b = 10;
// 	ft_swap(&a, &b);
// 	printf("a = %d, b = %d ", a, b);
// }
