/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:47:11 by jonathfe          #+#    #+#             */
/*   Updated: 2026/06/18 22:00:07 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_len(long n)
{
	long	i;

	i = 0;
	if (n < 0)
	{
		n *= (-1);
		i++;
	}
	if (n == 0)
	{
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	long_n;
	int		res_len;

	long_n = n;
	res_len = ft_len(long_n);
	res = malloc(sizeof(char) * res_len + 1);
	if (!res)
		return (NULL);
	i = 0;
	res[res_len] = '\0';
	if (long_n < 0)
	{
		res[i] = '-';
		long_n *= (-1);
		i++;
	}
	while (res_len > i)
	{
		res[res_len - 1] = '0' + (long_n % 10);
		res_len--;
		long_n = long_n / 10;
	}
	return (res);
}
