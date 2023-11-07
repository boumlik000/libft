#include<stdlib.h>
#include<stdio.h>
void * ft_calloc(size_t count, size_t size)
{
    int i = count * size;
    void * x;
    x= malloc(i);
    char *t = (char *)x;
    i--;
    while (i>=0)
    {
        t[i] = 0;
        i--;
    }
    return x;
}


int main()
{
    int *src=(int *) ft_calloc(5,8);
    for (int i = 0; i < 5; i++)
        printf("%d\n",src[i]);
    return 0;
}
