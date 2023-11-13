#include "header.h"
char * ft_strchr(const char *s, int c)
{
    int i = 0;
    while(s[i] != c && s[i])
        i++;
    if(s[i] == '\0')
        return 0;

    return (char *)s+i;
}