/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:14:34 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/24 16:40:07 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**freefun(char **p, int j)
{
	while (j >= 0)
	{
		free(p[j]);
		j--;
	}
	free(p);
	return (NULL);
}

int	words_nbr(const char *str, char s)
{
	int	i;
	int	words_count;
	int	start;

	i = 0;
	words_count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == s)
			i++;
		start = i;
		while (str[i] && str[i] != s)
			i++;
		if (start != i)
			words_count++;
		if (str[i] == '\0')
			return (words_count);
		i++;
	}
	return (words_count);
}

char	**malword(const char *str, char s, char **p)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == s)
			i++;
		start = i;
		while (str[i] && str[i] != s)
			i++;
		if (start != i)
			p[j] = (char *)malloc(sizeof(char) * ((i - start) + 1));
		if (!p[j])
			return (freefun(p, j));
		j++;
		if (str[i] == '\0')
			return (p);
		i++;
	}
	return (p);
}
char	**word(const char *str, char s, char **p)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == s)
			i++;
		start = i;
		while (str[i] && str[i] != s)
			i++;
		if (start != i)
			p[j] = ft_memcpy(p[j], str + start, i - start);
		if (start != i)
			p[j][i - start] = '\0';
		if (!p)
			return (freefun(p, j));
		j++;
		if (str[i] == '\0')
			return (p);
		i++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	if(!s)
		return NULL;
	char	**p;
	p = (char **)malloc(sizeof(char *) * ((words_nbr(s, c) + 1)));
	if (!p)
		return (NULL);
	p = malword(s, c, p);
	if (!p)
		return (NULL);
	p = word(s, c, p);
	p[words_nbr(s, c)] = NULL;
	return (p);
}
