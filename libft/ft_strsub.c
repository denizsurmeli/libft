#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *mem;
	size_t i;

	i = 0;
	mem = (char *)malloc((len + 1) * sizeof(char));
	if (mem == NULL || s == NULL)
		return NULL;
	while (i < len)
	{
		mem[i] = s[i + start];
		i++;
	}
	mem[i] = 0;
	return mem;
}