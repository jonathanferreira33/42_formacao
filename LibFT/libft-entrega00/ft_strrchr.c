/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 20:35:51 by jonathfe          #+#    #+#             */
/*   Updated: 2026/06/18 23:06:44 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	size;
	char	*str;

	str = (char *)s;
	size = ft_strlen(str) + 1;
	str += size - 1;
	i = size;
	while (i > 0)
	{
		if (*str == (char)c)
			return (str);
		str--;
		i--;
	}
	return (NULL);
}
