/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:45:10 by adu-pelo          #+#    #+#             */
/*   Updated: 2016/10/18 17:13:51 by adu-pelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <wchar.h>

size_t	ft_wstrlen(wchar_t *s)
{
	size_t i;

	i = 0;
	while (*s)
	{
		if (*s < (1 << 7))
			i += 1;
		else if (*s < (1 << 11))
			i += 2;
		else if (*s < (1 << 16))
			i += 3;
		else if (*s < (1 << 21))
			i += 4;
		s++;
	}
	return (i);
}
