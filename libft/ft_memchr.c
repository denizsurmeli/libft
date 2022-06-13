/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizsurmeli <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:30:41 by denizsurmeli      #+#    #+#             */
/*   Updated: 2022/06/13 19:35:52 by denizsurmeli     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*loc;

	loc = NULL;
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)(s + i)) == c)
			loc = (void *)(s + i);
		i++;
	}
	return (loc);
}
