#include<stdio.h>
unsigned int ft_strlen(const char *x)
{
    int i = 0;
    while(x[i])
    {
        i++;
    }
    return i;
}
int main ()
{
    char a[] = "alo";
    printf("%d\n",ft_strlen(a));
}