/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:06:13 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/13 18:06:18 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	unsigned char *string;
	string = (unsigned char *)s;
	while (string[i])
	{
		i++;
	}
	j = i--;
	while (j >= 0)
	{
		if (string[j] == c)
			return ((char *)string + j);
		j--;
	}
	return (0);
}
