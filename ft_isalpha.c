#include<stdio.h>
#include<ctype.h>
int  ft_isalpha(int str)
{
    return ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'));
    
}
int main(){
    char v = 'h';
    char q='q';
    printf("%d \n",ft_isalpha(v));
    printf("%d \n",isalpha(q));
    return 0;
}
