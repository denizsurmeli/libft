#include "libft.h"
#include <stdlib.h>

static int is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return 1;
	return 0;
}

char *ft_strtrim(char const *s)
{
	char *mem;
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = ft_strlen(s) - 1;
	k = 0;
	while (is_whitespace(s[i]))
		i++;
	while (is_whitespace(s[j]))
		j--;
	mem = (char *)malloc((j - i + 1) * sizeof(char));
	while (i < j + 1)
	{
		mem[k] = s[i];
		k++;
		i++;
	}
	mem[k] = 0;
	return mem;
}