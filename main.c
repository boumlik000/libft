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
    
    char *result = itoa(05);
    if (result != NULL) {
        printf("Result: %s\n", result);
        free(result); // Free the allocated memory after use
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
    

}
