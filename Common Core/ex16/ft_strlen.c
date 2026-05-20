int	ft_strlen(char *str);

int ft_strlen(char *str);
{
	int	count;
	int	i;

	count = 0;
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}