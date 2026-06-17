/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathfe <jonathfe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:56:27 by jonathfe          #+#    #+#             */
/*   Updated: 2026/06/17 16:09:13 by jonathfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strings(const char *str, char sep)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i] != '\0')
			counter++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (counter);
}

size_t	word_len(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s && *s != c)
	{
		s++;
		counter++;
	}
	return (counter);
}

static	char	*get_word(const char *s, char c)
{
	char	*new_str;
	size_t	count_word;

	count_word = word_len(s, c);
	new_str = malloc(count_word + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s, count_word + 1);
	return (new_str);
}

static void	free_split(char **str_splitted, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(str_splitted[j]);
		j++;
	}
	free(str_splitted);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;

	split = malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		split[i] = get_word(s, c);
		if (!split[i])
		{
			free_split(split, i);
			return (NULL);
		}
		s += word_len(s, c);
		i++;
	}
	split[i] = NULL;
	return (split);
}
