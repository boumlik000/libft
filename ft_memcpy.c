/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:09:21 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/13 17:09:23 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*source;
	char		*destination;
	size_t		i;

	source = (const char *)src;
	destination = (char *)dest;
	if (destination == NULL && source == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
