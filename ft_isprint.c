#include<stdio.h>
#include<ctype.h>

int ft_isprint(int x)
{
    return ((x>= 32 && x<= 126));
}
int  main()
{
    char a = 127;
    printf("%d \n",ft_isprint(a));
    printf("%d \n",isprint(a));

    return 0;
}

