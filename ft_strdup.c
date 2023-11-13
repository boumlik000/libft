#include "header.h"
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

