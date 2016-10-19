/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nwstrlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:45:30 by adu-pelo          #+#    #+#             */
/*   Updated: 2016/10/18 17:39:42 by adu-pelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <wchar.h>
#include <stdio.h> // test

static void	inc(size_t *a, unsigned int *b, int inc)
{
	*a += inc;
	*b -= inc;
}

size_t		ft_nwstrlen(wchar_t *s, unsigned int len)
{
	size_t i;

	i = 0;
	while (*s && (len > 0))
	{
		if (*s < (1 << 7))
			inc(&i, &len, 1);
		else if (*s < (1 << 11))
			inc(&i, &len, 2);
		else if (*s < (1 << 16))
			inc(&i, &len, 3);
		else if (*s < (1 << 21))
			inc(&i, &len, 4);
		s++;
	}
	return (i);
}
