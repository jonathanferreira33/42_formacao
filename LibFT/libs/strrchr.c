char *strrchr(char *arg, int c)
{
	int	count;

	count = strlen(arg);
	while (arg[count] != '\0')
	{
		if (arg[count] == c)
			return &arg[count];
		count--;
	}
	return 0;
}
