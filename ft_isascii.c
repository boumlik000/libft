#include<stdio.h>
#include<ctype.h>
int ft_isascci(int x)
{
    return ((x >= 0) && (x<= 127));
}

int main()
{
    char c = 128;
    printf("%d \n" , ft_isascci(c));
    printf("%d \n" , isascii(c));
    return 0;
}
