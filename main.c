/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:08:50 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/13 18:08:52 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	char	dest[5];
	char	src[20];
	char	src1[];

	dest = "SRC";
	src = "source";
	src1 = "source";
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(src + 2, src, 5);
	printf("After memmove dest = %s, src = %s\n", dest, src);
}
