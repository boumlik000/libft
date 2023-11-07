#include<stdio.h>
int ft_toupper (int x)
{
    // int a = 0;
        if( (x >= 'a') && (x <= 'z') )
            x -=  32;
        return x;
}
int main(){
    char a= '2';
    printf("%c",ft_toupper(a));
}
