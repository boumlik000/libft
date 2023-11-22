/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:08:50 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/22 09:55:40 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	char	input_string[] = "alo";

	ft_striteri(input_string, &uppercase);
	printf("Modified string: %s\n", input_string);
	return (0);
}
