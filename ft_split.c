/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:14:34 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/21 21:14:35 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	words_nbr(const char *str, char s)
{
	size_t	i;
	size_t	words_count;

	i = 0;
	words_count = 0;
	while (str[i] && str[i] == s)
		i++;
	while (str[i])
	{
		if (str[i] != s)
		{
			while (str[i] && str[i] != s)
				i++;
			words_count++;
			while (str[i] && str[i] == s)
				i++;
		}
		else
			i++;
	}
	return (words_count);
}

// char **ft_split(char const *s, char c)
// {

// }