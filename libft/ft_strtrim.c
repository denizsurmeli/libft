#include "libft.h"

char *ft_strtrim(char const *s, char const *set)
{
	size_t size_s;
	char *newstring;

	if (!s || !set)
		return (NULL);
	while (*s && ft_strchr(set, *s))
		s++;
	size_s = ft_strlen(s);
	while (size_s && ft_strchr(set, s[size_s]))
		size_s--;
	newstring = ft_substr((char *)s, 0, size_s + 1);
	return (newstring);
}
