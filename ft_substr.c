/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:37:47 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/22 09:41:15 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	i = ft_strlen(str);
	if (start >= i)
		return (NULL);
	if (i - start < len)
		j = i - start;
	else
		j = len;
	substr = (char *)malloc(sizeof(char) * (j + 1));
	if (substr == NULL)
		return (NULL);
	ft_memcpy(substr, str + start, j);
	return (substr);
}
