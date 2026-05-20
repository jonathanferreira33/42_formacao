int	ft_strcmp(char *s1, char *s2);

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