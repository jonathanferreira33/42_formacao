int ft_isprint(char arg)
{
    if((arg >= 0 && arg <= 31) || (arg == 127))
        return (0);
    return(1);
}