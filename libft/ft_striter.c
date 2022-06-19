#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	size_t i;

	if (s == NULL || *s == 0 || f == NULL)
		return;

	i = 0;
	while (s[i] != 0)
	{
		f(s + i);
		i++;
	}
}