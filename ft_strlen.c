#include "header.h"
size_t ft_strlen(const char *x)
{
    int i = 0;
    while(x[i])
    {
        i++;
    }
    return i;
}
