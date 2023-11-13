/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:10:15 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/13 17:10:17 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	const char	*source;

	source = (const char *)src;
	i = 0;
	destination = (char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (destination > source)
	{
		while (n-- > 0)
			destination[n] = source[n];
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
