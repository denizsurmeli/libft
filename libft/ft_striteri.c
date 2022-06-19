#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int i, char *c))
{
	size_t i;

	if (s == NULL || *s == 0 || f == NULL)
		return;
	i = 0;
	while (s[i] != 0)
	{
		f(i, s + i);
		i++;
	}
}