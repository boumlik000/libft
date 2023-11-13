#include "header.h"
int main()
{
    char dest[5] = "SOURC";
     char src[]  = "source";
     char src1[]  = "source";

     
    printf("Before memmove dest = %s, src = %s\n", dest, src);
    memmove(src, src + 2, 5);
    printf("After memmove dest = %s, src = %s\n", dest, src);


    // char str[] = "  ++2";
    // printf("%d\n",ft_atoi(str));
    
    
    return(0);

    

        


}
