#include "header.h"
void ft_bzero(void *s, size_t n)
{
    unsigned char *vd = (unsigned char *)s;
    size_t i = 0;
    while (i < n)
    {
        vd[i] = 0;
        i++;
    }
}