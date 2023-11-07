#include<stdio.h>
unsigned int ft_strlen(const char *x)
{
    int i = 0;
    while(x[i])
        i++;
    return i;
}
int ft_strlcat(char *dest, const char *src,size_t n){
    
    int dst = ft_strlen(dest);
    int i = 0;

    if ( dst >= (int)n || src == 0)
		return ft_strlen(src);
    while (src[i] && i < (n - 1))
    {
        dest[i+dst] = src[i];
        i++;
    }
    dest[i+dst]= '\0'; 
    return dst+ ft_strlen(src);


}
int  main()
{
    char src[] = "ana";
    char dst[1];
    printf("%d => %s \n",ft_strlcat(dst,src,8),dst);
    //printf("%lu => %s \n",strlcat(dst,src,8),dst);
    return 0;
}
