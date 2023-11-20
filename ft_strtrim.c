#include "header.h"
int check(char t,char * set)
{
    int y = 0;
     while (set[y])
        {
           if (set[y] == t)
            return 1;
            y++;
        }
        return 0;
}
char *ft_strtrim(char const *s1, char const *set)
{
    //size_t z = ft_strlen(s1);
    int x = 0;
    if (s1 == NULL || set == NULL)
        return NULL;
    while (s1[x] && check(s1[x], (char *)set))
    {
        x++;
    }
    int len = ft_strlen(s1);
    while (s1[len-1] && check(s1[len-1], (char *)set) && len > x)
    {
        len--;
    }
    if (len - x == 0)
        return (char *)(&s1[strlen(s1)]);
    
    char *result =(char *)malloc((sizeof(char) * (len-x+1)));
    ft_memcpy(result,s1+x,len-x);
    result[len-x] = '\0';
    return result;
    
}
