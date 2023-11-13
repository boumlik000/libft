#include "header.h"

int	ft_atoi(const char *str)
{
	int i;
	i = 0;
	int j = 0;
	int sign = 1;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
	{
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		j = j * 10 + str[i] - '0';
		i++;
	}
	return (j * sign);
}