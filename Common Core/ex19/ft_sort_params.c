void	ft_putchar(char	c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	char_s1;
	int	char_s2;

	i = 0;
	while (*s1 && s1[i] == s2[i])
	{
		i++;
		s1++;
	}
	char_s1 = s1[i];
	char_s2 = s2[i];
	return (char_s1 - char_s2);
}

void	organize_list(int argc, char *argv[])
{
	int	temp;
	temp = 1;
	while (--argc)
	{

	}
}

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
