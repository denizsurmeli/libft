#include "libft.h"
#include <stdlib.h>

static int is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return 1;
	return 0;
}
static int find_begin(char const *str)
{
	size_t i;

	i = 0;
	while (is_whitespace(str[i]))
		i++;
	return i;
}

static int find_end(char const *str)
{
	size_t i;

	if (ft_strlen(str) == 0)
		return (0);
	i = ft_strlen(str) - 1;
	if (i == 0)
		return (0);
	while (is_whitespace(str[i]))
		i--;
	return i;
}
char *ft_strtrim(char const *s)
{
	char *mem;
	size_t i;
	size_t j;
	size_t k;

	if (s == NULL)
		return NULL;
	i = find_begin(s);
	j = find_end(s);
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