#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *mem;

	if (s1 == NULL && s2 == NULL)
		return NULL;
	mem = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (mem == NULL)
		return NULL;
	ft_memset(mem, '\0', ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s1 == NULL)
		return mem = ft_strcat(mem, s2);
	if (s2 == NULL)
		return mem = ft_strcat(mem, s1);
	ft_strcat(mem, s1);
	ft_strcat(mem, s2);
	return mem;
}