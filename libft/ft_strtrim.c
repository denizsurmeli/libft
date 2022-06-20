#include "libft.h"
#include <stdlib.h>

static int is_in(char c, const char *set)
{
	size_t i;
	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return 1;
		i++;
	}
	return 0;
}
static int find_begin(char const *str, char const *set)
{
	size_t i;

	i = 0;
	while (is_in(str[i], set))
		i++;
	return i;
}

static int find_end(char const *str, char const *set)
{
	size_t i;

	if (ft_strlen(str) == 0)
		return (0);
	i = ft_strlen(str) - 1;
	if (i == 0)
		return (0);
	while (is_in(str[i], set))
		i--;
	return i;
}
char *ft_strtrim(char const *s, char const *set)
{
	char *mem;
	size_t i;
	size_t j;
	size_t k;

	if (s == NULL)
		return NULL;
	i = find_begin(s, set);
	j = find_end(s, set);
	k = 0;
	if (i >= j)
		return NULL;
	mem = (char *)malloc((j - i + 1) * sizeof(char));
	if (mem == NULL)
		return NULL;
	while (i < j + 1)
	{
		mem[k] = s[i];
		k++;
		i++;
	}
	mem[k] = 0;
	return mem;
}
