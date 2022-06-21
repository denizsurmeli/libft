#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	void *mem;

	mem = malloc(count * size);
	if (mem == NULL)
		return NULL;
	return mem;
}