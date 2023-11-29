/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.j                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:02:20 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/13 18:02:21 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t j;
	size_t count;

	if (n <= ft_strlen(dest))
		return (n + ft_strlen(src));
	j = ft_strlen(dest);
	count = 0;
	while (src[count] && j + 1 < n)
	{
		dest[j] = src[count];
		j++;
		count++;
	}
	dest[j] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[count]));
}

