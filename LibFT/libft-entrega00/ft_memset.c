/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:32:57 by jonathfe          #+#    #+#             */
/*   Updated: 2026/06/18 21:42:36 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;
	unsigned int	count;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		ptr[count] = value;
		count++;
	}
	return (s);
}
