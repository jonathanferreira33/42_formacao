int	strlen(char arg[])
{
	int	count;
	count = 0;
	while(arg[count] != '\0')
		count++;
	return count;
}
