/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:46:09 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/06 13:20:52 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*vd;
	size_t			i;

	vd = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		vd[i] = 0;
		i++;
	}
}
// int main()
// {
// 	char c[] = "hello";
// 	ft_bzero(c+2,1);
// 	printf("%s",c);
// 	return (0);
// }
