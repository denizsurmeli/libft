#include "libft.h"
#include <stdlib.h>

void *ft_memalloc(size_t size)
{
	void *loc;

	loc = malloc(size);
	if (loc != NULL)
		ft_bzero(loc, size);
	return (loc);
}