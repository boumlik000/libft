#include "header.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    char *destination = (char *)dest;
    const char *source = (const char *)src;
    
    if (dest == NULL && src == NULL)
        return NULL;
    
    if (destination > source)
    {
        while (n > 0)
        {
            n--;
            destination[n] = source[n];
        }
    }
    else
    {
        while (n > i)
        {
            destination[i] = source[i];
            i++;
        }
        
    }
    return dest;
}
