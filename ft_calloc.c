/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:47:33 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/13 16:47:35 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*x;
	char	*t;

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
