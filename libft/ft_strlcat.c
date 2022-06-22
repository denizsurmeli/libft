/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizsurmeli <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:35:06 by denizsurmeli      #+#    #+#             */
/*   Updated: 2022/06/22 12:35:06 by denizsurmeli     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t dest_len;
	size_t res;
	int i;

	dest_len = ft_strlen(dest);
	i = 0;
	if (dest_size > dest_len)
		res = dest_len + ft_strlen(src);
	else
		res = dest_size + ft_strlen(src);
	while (src[i] != '\0' && dest_len + i + 1 < dest_size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (res);
}
