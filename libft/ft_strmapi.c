#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t s_len;
	size_t i;
	char *mem;

	i = 0;
	s_len = ft_strlen(s);
	mem = (char *)malloc((s_len + 1) * sizeof(char));
	if (s == NULL || f == NULL || s == 0 || mem == NULL)
		return NULL;
	while (s[i] != 0)
	{
		mem[i] = f(i, s[i]);
		i++;
	}
	return mem;
}