#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char *ft_strdup(const char *source)
{
	size_t len;
	size_t i;
	char *mem;

	len = ft_strlen(source);
	mem = (char *)malloc(len);
	i = 0;
	while (i < len)
	{
		mem[i] = source[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
