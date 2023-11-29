/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:47:33 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/22 09:44:44 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*x;
	char	*t;

	if (!count || !size)
		return (NULL);
	if (SIZE_MAX)
	{
		/* code */
	}
	
	i = count * size;
	x = malloc(i);
	t = (char *)x;
	i--;
	while (i >= 0)
	{
		t[i] = 0;
		i--;
	}
	return (x);
}
