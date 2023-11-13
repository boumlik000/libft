#include "header.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    const char *x1 = (char *)s1;
    const char *x2 = (char *)s2;
    while (i < n)
    {
        if (x1[i] != x2[i])
        {
            return x1[i]-x2[i];
        }
        i++;
    }
    return 0;
}