#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	dup = (char *)malloc(i * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);
	while (j < i)
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
int main(int argc, char const *argv[])
{
    const char src[] = "alo";
    char *dest = ft_strdup(src);
    printf("%s\n",src);
    printf("%s\n",dest);

    free(dest);
    return 0;
}
