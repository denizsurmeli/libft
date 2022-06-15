#include "libft.h"
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_to_uc;
	unsigned char *s2_to_uc;
	size_t i;

	i = 0;
	s1_to_uc = (unsigned char *)s1;
	s2_to_uc = (unsigned char *)s2;

	while (i < n)
	{
		if (s1_to_uc[i] != s2_to_uc[i])
			return (s1_to_uc[i] - s2_to_uc[i]);
		i++;
	}
	return (0);
}
