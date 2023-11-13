/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:19:33 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/13 17:19:37 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memset(void *big, int to_find, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)big;
	i = 0;
	while (i < len)
	{
		str[i] = to_find;
		i++;
	}
	return (big);
}
