#include<stdio.h>
#include<string.h>
unsigned int ft_strlen(const char *x)
{
    int i = 0;
    while(x[i])
        i++;
    return i;
}
size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t srcsize;
	size_t i;

    if ( dst == 0 || src== 0)
		return (0);
	
	
        srcsize = ft_strlen(src);
	    i = 0;
	    if (n != 0)
	    {
		    while (src[i] != '\0' && i < (n - 1))
		    {
                
			    dst[i] = src[i];
			    i++;
		    }
		    dst[i] = '\0';
	    }
	    return (srcsize);
}
int main(){
    char src []= "aello";
    char dest[20];
    printf("%lu => \n", ft_strlcpy(dest,src,-4));
  
    printf("[%s]\n", dest);

    printf("[%s]\n", src);
    // printf("%lu => %s \n", strlcpy(dest,src,4), dest);

}
