

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	size_t num;
	size_t sign;

	i = 0;
	num = 0;
	sign = 1;

	while(str[i] == '\n' || str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = -1;
	}
	if(str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while((str[i]) && (str[i] >= '0') && (str[i] <= '9'))
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sign);
}
