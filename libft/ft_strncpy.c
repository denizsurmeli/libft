#include "libft.h"
#include <stddef.h>

char *ft_strncpy(char *dest, const char *src, size_t l)
{
	size_t i;

	i = 0;
	while (i < l && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < l)
		dest[i++] = '\0';
	return (dest);
}