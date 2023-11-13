#include "header.h"
int ft_tolower (int x)
{
    // int a = 0;
        if( (x >= 'A') && (x <= 'Z') )
            x +=  32;
        return x;
}
