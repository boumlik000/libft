/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:08:50 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/30 20:42:04 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
    char *str = "hello";
    int i = 0;
    //printf("%lu \n",ft_strlcat(NULL,NULL,0));
    char **ptr = ft_split(NULL, (char *)NULL);
    for(int i = 0; ptr[i]; i++)
        printf("%s\n", ptr[i]);
    
    
}
