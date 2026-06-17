/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 20:35:51 by jonathfe          #+#    #+#             */
/*   Updated: 2026/06/17 16:08:07 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *arg, int c)
{
	int	count;

	count = strlen(arg);
	while (arg[count] != '\0')
	{
		if (arg[count] == c)
			return (&arg[count]);
		count--;
	}
	return (0);
}
