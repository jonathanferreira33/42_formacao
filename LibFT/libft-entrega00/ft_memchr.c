/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:33:29 by jonathfe          #+#    #+#             */
/*   Updated: 2026/06/17 18:59:40 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_str;
	size_t			i;

	ptr_str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_str[i] == (unsigned char)c)
		{
			return ((void *)&ptr_str[i]);
		}
		i++;
	}
	return (NULL);
}
