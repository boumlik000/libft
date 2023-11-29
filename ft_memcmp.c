/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:07:52 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/13 17:07:56 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	unsigned char	*x1;
	unsigned char	*x2;

	i = 0;
	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	while ((size_t)i < n)
	{
		if (x1[i] != x2[i])
			return (x1[i] - x2[i]);
		i++;
	}
	return (0);
}
