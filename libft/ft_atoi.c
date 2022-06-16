#include "libft.h"

int ft_atoi(const char *src)
{
	size_t i;
	int num;
	int sign;

	sign = 1;
	num = 0;
	i = 0;
	while (src[i] == ' ' || src[i] == '\n' || src[i] == '\t' ||
		   src[i] == '\v' || src[i] == '\f' || src[i] == '\r')
		i++;
	if (src[i] == '-' || src[i] == '+')
	{
		if (src[i] == '-')
			sign = -1;
		i++;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		num = (num * 10) + (src[i] - '0');
		i++;
	}
	return (num * sign);
}