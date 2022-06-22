#include "libft.h"
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t loc)
{
	size_t i;
	size_t j;

	i = 0;
	if (haystack == NULL || needle == NULL)
		return 0;
	if (needle[0] == '\0')
		return (char *)haystack;
	while (haystack[i] != '\0' && i < loc)
	{
		j = 0;
		while (needle[j] != '\0' && i + j < loc)
		{
			if (needle[j] == haystack[i + j])
				j++;
			else
				break;
		}
		if (j == ft_strlen(needle))
			return (char *)(haystack + i);
		i++;
	}
	return (NULL);
}