/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:14:19 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/22 09:30:47 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_length(long int n)
{
	size_t	length;

	length = 1;
	if (n < 0)
	{
		length++;
		n = -n;
	}
	while (n >= 10)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	long int	t;
	size_t			length;
	char		*str;

	t = n;
	length = num_length(t);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		t = -t;
	}
	str[length] = '\0';
	while (length > 0 && str[length - 1] != '-')
	{
		str[length - 1] = (t % 10) + '0';
		t /= 10;
		length--;
	}
	return (str);
}
