#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
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