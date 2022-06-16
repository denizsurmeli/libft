#include "libft.h"
#include <stddef.h>

size_t ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t dest_len;
	size_t src_len;
	size_t i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (dest_len > dest_size)
		return dest_len + src_len;
	while (src[i] != '\0' && dest_len + i + 1 < dest_size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}