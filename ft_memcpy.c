#include "header.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    const char *source = (const char *)src;
    char *destination = (char *)dest;

    if(destination == NULL && source == NULL)
        return (NULL);
    size_t i = 0;

    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return dest;
}
