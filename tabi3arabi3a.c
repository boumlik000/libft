#include<stdlib.h>
#include<stdio.h>
int main()
{

    char  * a = malloc(10);
    a[0] = 'r';
    printf("%s", a);
    return 0;
}
