#include "libft.h"

char *ft_strrchr(const char *s1, char c)
{
	size_t i;

	i = ft_strlen(s1);
	while (i > 0)
	{
		if (s1[i - 1] == c)
		{
			return (char *)(s1 + (i - 1));
		}
		i--;
	}
	return (NULL);
}