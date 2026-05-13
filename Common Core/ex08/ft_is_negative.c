void	ft_putchar(char	c);

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

// int main (void)
// {
// 	int n = -1;
// 	int m = 0;
// 	int o = 1;
// 	ft_is_negative(n);
// 	ft_is_negative(m);
// 	ft_is_negative(o);
// 	return (0);
// }