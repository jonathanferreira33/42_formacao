char	*strcat(char *dest, char *src)
{
	int		count_dest;
	int		count;
	char	*ptr;

	ptr = dest;
	count = 0;
	count_dest = 0;
	while(*dest)
	{
		dest++;
		count_dest++;
	}
	while(src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	count++;
	dest[count + count_dest] = '\0';
	dest = ptr;
	return (dest);
}
