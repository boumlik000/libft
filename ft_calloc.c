/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:47:33 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/29 18:34:24 by mboumlik         ###   ########.fr       */
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
	if (size && count >= __SIZE_MAX__ / size)
		return (NULL);
	i = count * size;
	x = malloc(i);
	if (!x)
		return ;
	t = (char *)x;
	i--;
	while (i >= 0)
	{
		t[i] = 0;
		i--;
	}
	return (x);
}
