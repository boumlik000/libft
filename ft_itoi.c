/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:14:19 by mboumlik          #+#    #+#             */
/*   Updated: 2023/11/20 08:14:22 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// Function to calculate the length of an integer
static size_t num_length(long int n) {
    int length = 1;
    if (n < 0) {
        length++; // accounting for the negative sign
        n = -n;   // making n positive for calculation
    }
    while (n >= 10) {
        length++;
        n /= 10;
    }
    return length ;
}

// Function to convert integer to string
char *ft_itoa(int n) {
    long int t = n ;
    int length = num_length(t);

    // Allocate memory for the string
    char *str = (char *)malloc(sizeof(char) *(length + 1));
    if (str == NULL) {
        return NULL; // Return NULL if allocation fails
    }

    // Handling the negative sign for negative numbers
    if (n< 0) {
        str[0] = '-';
        t = -t;
    }

    // Converting integer to string
    str[length] = '\0'; // Adding null terminator at the end
    while (length > 0 && str[length - 1] != '-') {
        str[length - 1] = (t % 10) + '0';
        t /= 10;
        length--;
    }

    return str;
}
