#include<stdio.h>
void * memset(void *b, int c, size_t len)
{
    unsigned char *x = b;
    unsigned char y = (unsigned char) c;

    unsigned int i = 0;
    while (i < len)
    {
        x[i]=y;
        i++;
    }
    return b;
}
int main()
{
    // char z[] = "hello";
    // printf("%d\n",ft_memset())
}