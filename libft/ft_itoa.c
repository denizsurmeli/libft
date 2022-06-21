#include "libft.h"
#include <stdlib.h>

static size_t count_bits(int n)
{
	int bit_count;

	bit_count = 0;
	if (n < 0)
	{
		bit_count++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		bit_count++;
	}
	return bit_count;
}

char *ft_itoa(int n)
{
	char *mem;
	int k;

	if (n == 2147483647)
		return "2147483647";
	if (n == -2147483648)
		return "-2147483648";
	if (n == 0)
		return "0";
	k = count_bits(n) - 1;
	mem = (char *)malloc((count_bits(n) + 1) * sizeof(char));
	if (mem == NULL)
		return NULL;
	mem[count_bits(n)] = '\0';
	if (n < 0)
	{
		n *= -1;
		mem[0] = '-';
	}
	while (n > 0)
	{
		mem[k--] = '0' + (n % 10);
		n /= 10;
	}
	return mem;
}