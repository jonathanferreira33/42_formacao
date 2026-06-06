int isalpha(char arg)
{
    if((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
        return (1);
    return(0);
}