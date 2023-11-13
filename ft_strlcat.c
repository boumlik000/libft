#include "header.h"
size_t ft_strlcat(char *dest, const char *src,size_t n)
{    
    int dst = ft_strlen(dest);
    int i = 0;

    if ( dst >= (int)n || src == 0)
		return ft_strlen(src);
    while (src[i] && i < (n - 1))
    {
        dest[i+dst] = src[i];
        i++;
    }
    dest[i+dst]= '\0'; 
    return dst+ ft_strlen(src);


}

