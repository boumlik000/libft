/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:46:09 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/26 13:21:22 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*vd;
	size_t			i;

	
	vd = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		vd[i] = 0;
		i++;
	}
}
