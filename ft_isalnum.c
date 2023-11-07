#include<stdio.h>
#include<ctype.h>

int ft_isalnum(int x)
{
    return ((x >= '0' && x<= '9') || (x>= 'a' && x<+ 'z') || (x>= 'A' && x<= 'Z'));
}
int main()
{
    char a = 0;
    printf("%d \n",ft_isalnum(a));
    printf("%d \n",isalnum(a));
}