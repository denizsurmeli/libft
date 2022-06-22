/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizsurmeli <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:35:04 by denizsurmeli      #+#    #+#             */
/*   Updated: 2022/06/22 12:35:04 by denizsurmeli     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *source)
{
	size_t	len;
	size_t	i;
	char	*mem;

	len = ft_strlen(source);
	mem = (char *)malloc(len);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mem[i] = source[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
