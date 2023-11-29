/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:19:06 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/22 09:53:01 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	j;
	int					i;
	int					sign;

	i = 0;
	j = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		j = j * 10 + str[i] - '0';
		if (j > 9223372036854775807 && sign == -1)
			return (0);
		else if (j > 9223372036854775807 && sign == 1)
			return (-1);
		i++;
	}
	return ((int)j * sign);
}
