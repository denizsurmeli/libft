#include "libft.h"
#include <stddef.h>

char	*ft_strncpy(char *dest,const char *src, size_t l)
{
	size_t	i;

	i = 0;
	while(i < l && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i - 1 < l)
		dest[i] = '\0';
	return (dest);
}
