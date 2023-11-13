/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:02:20 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/13 18:02:21 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	int	dst;
	int	i;

	dst = ft_strlen(dest);
	i = 0;
	if (dst >= (int)n || src == 0)
		return (ft_strlen(src));
	while (src[i] && i < (n - 1))
	{
		dest[i + dst] = src[i];
		i++;
	}
	dest[i + dst] = '\0';
	return (dst + ft_strlen(src));
}
