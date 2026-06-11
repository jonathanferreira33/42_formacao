char	*strnstr(const char *str, const char *to_find, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	if (to_find[0] == '\0')
		return ((char *)str);

	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
