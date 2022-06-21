#include "libft.h"
#include <stdlib.h>

static size_t ft_count_words(char const *s, char c)
{
	size_t count;
	int i;
	int j;

	i = 0;
	j = ft_strlen(s) - 1;
	count = 0;
	while (s[i++] == c)
		;
	while (s[j--] == c)
		;
	while (i < j)
	{
		while (s[i++] != c)
			;
		while (s[i++] == c)
			;
		count++;
	}
	return (count);
}

char **ft_strsplit(char const *s, char c)
{
	char **words;
	size_t i;
	size_t j;
	size_t k;
	i = 0;
	k = 0;
	words = (char **)malloc(sizeof(char **) * (ft_count_words(s, c) + 1));
	while (s[i] != 0)
	{
		while ((s[i] == c || s[i] == 0) && i < ft_strlen(s))
			i++;
		if (s[i] == 0)
			break;
		j = i + 1;
		while ((s[j] != c || s[j] == 0) && j < ft_strlen(s))
			j++;
		words[k++] = ft_substr(s, i, j - i);
		i = j;
	}
	words[k] = 0;
	return words;
}