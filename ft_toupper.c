#include "header.h"
int ft_toupper (int x)
{
    
    if( (x >= 'a') && (x <= 'z') )
        x -=  32;
    return x;
}

