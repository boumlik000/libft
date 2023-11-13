#include "header.h"

void * ft_memset(void *big, int to_find, size_t len)
{
    size_t i = 0;
    char *str = (char *)big;
    while (i < len)
    {
        str[i] = to_find;
        i++;
    }
    return (big);
    
}
