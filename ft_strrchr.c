#include "header.h"
char *ft_strrchr(const char *s,int c)
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        i++;
    }
    j = i--;
    while(j>=0)
    {
        if(s[j]== c)
            return (char *)s+j;
        j--;
    }    
    return 0;
}

