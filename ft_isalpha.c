/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:56:36 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/06 13:34:03 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{
	return ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'));
}

// int main()
// {
// 	char c[] = "hello ssa 4 s2 7";
// 	int i = 0,j = 0;
// 	while (c[i])
// 	{
// 		if(ft_isalpha(c[i]))
// 			j++;
// 		i++;
// 	}

// 	printf("%d",j);
// }
