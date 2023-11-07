#include<ctype.h>
#include<stdio.h>

int ft_isdigit(int c){
    return (c >= 48 && c <= 57);
}
int main()
{
    char i = '0';
    printf("%d \n",ft_isdigit(i));
    printf("%d \n",isdigit(i));
} 