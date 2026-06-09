char *strchr(char *arg, int c)
{
	int	count;

	count = 0;
	while (arg[count] != '\0')
	{
		if (arg[count] == c)
			return &arg[count];
		count++;
	}	
	return 0;
}
