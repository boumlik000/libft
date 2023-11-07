#include<stdio.h>
int ft_toupper (int x)
{
    // int a = 0;
        if( (x >= 'A') && (x <= 'Z') )
            x +=  32;
        return x;
}
int main(){
    char a= 'A';
    printf("%c",ft_toupper(a));
}