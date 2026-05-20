void	ft_putchar(char	c);

int	main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 1)
		return (0);
	i = 1;
	i = 0;
	while (argc > 1)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		j = 0;
		argc--;
	}
	return (0);
}
