/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:34:32 by jonathfe          #+#    #+#             */
/*   Updated: 2026/06/18 22:30:10 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	char	*ptr;
	int		i;
	int		sign;
	int		res;

	ptr = (char *)nptr;
	sign = 1;
	i = 0;
	res = 0;
	while ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == 32)
		i++;
	if (ptr[i] == '+' || ptr[i] == '-')
	{
		if (ptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (ptr[i] >= 48 && ptr[i] <= 57)
	{
		res = res * 10 + (ptr[i] - '0');
		i++;
	}
	return (res * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     printf("Atoi: %d", ft_atoi("-a"));
// 	   printf("\nOriginal Atoi: %d", atoi("-a"));
//     return (0);
// }