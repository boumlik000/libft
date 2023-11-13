#include "header.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
	const unsigned char *str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] ==(unsigned char)c)
		{
			return (void *)(s+i);
		}
		i++;
	}
	return (NULL);
    
    
}