/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 20:35:41 by jonathfe          #+#    #+#             */
/*   Updated: 2026/06/17 16:07:33 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *arg, int c)
{
	int	count;

	count = 0;
	while (arg[count] != '\0')
	{
		if (arg[count] == c)
			return (&arg[count]);
		count++;
	}
	return (0);
}
