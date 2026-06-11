#include "libft.h"

int ft_isalnum(char arg)
{
    if(ft_isalpha(arg) == 1 || ft_isdigit(arg) == 1)
        return (1);
    return(0);
}