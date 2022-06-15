/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizsurmeli <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:47:42 by denizsurmeli      #+#    #+#             */
/*   Updated: 2022/06/13 19:35:51 by denizsurmeli     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *s_char;

	s_char = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_char[i] = 0;
		i++;
	}
	s = s_char;
}
