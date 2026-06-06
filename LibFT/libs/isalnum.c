int isalnum(char arg)
{
    if(isalpha(arg) == 1 || isdigit(arg) == 1)
        return (1);
    return(0);
}