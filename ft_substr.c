#include "header.h"
char *ft_substr(char const *str, unsigned int start,size_t len)
{
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    if(str == NULL)
        return NULL;
    i = ft_strlen(str);
    if (start >= i)
        return NULL;
        
    if (i - start < len)
        j = i - start;
    else
        j = len;
    char * substr = (char *)malloc(sizeof(char) * (j +1));
    if (substr == NULL)
        return NULL;
    ft_memcpy(substr,str+start,j);
    return substr;
}