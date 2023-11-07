#include<stdio.h>
#include <string.h>
int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int i =0;
    while(i < n && (s1[i] || s2[i]) )
    {
        if(s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return (0);

}
int main ()
{
    char a[]= "haalo";
    char b[]= "hallo";
    printf("%d\n",ft_strncmp(a,b,0));
    printf("%d\n",strncmp(a,b,3));
}