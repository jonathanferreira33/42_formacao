/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 20:36:06 by jonathfe          #+#    #+#             */
/*   Updated: 2026/06/17 16:05:34 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *arg1, char *arg2, int max)
{
	int	i;
	int	char_s1;
	int	char_s2;

	i = 0;
	while (*arg1 && arg1[i] == arg2[i] && i <= max)
	{
		i++;
		arg1++;
	}
	char_s1 = arg1[i];
	char_s2 = arg2[i];
	return (char_s1 - char_s2);
}
