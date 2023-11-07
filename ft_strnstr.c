#include "header.h"
char  *ft_strnstr(const char * full_string ,const char * to_find, int n)
{
    int i = 0;
    int j = 0;
    if(to_find == NULL)
        return ((char *)full_string);
        
    while (full_string[i] && i < n)
    {
        j = 0;
        while (full_string[i+j] == to_find[j] && full_string[i+j] && to_find[j] && (i + j) < n)
        {
            j++;
        }
        if(to_find[j] == '\0')
            return ((char *)(full_string + i));
        i++; 
         
    }
    return (NULL);
}

