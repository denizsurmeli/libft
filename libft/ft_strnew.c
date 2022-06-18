#include "libft.h"
#include <stdlib.h>

char *ft_strnew(size_t size)
{
	char *loc;
	size_t i;

	i = 0;
	loc = (char *)malloc(size);
	while (i < size + 1)
	{
		loc[i] = 0;
		i++;
	}

	return (loc);
}
