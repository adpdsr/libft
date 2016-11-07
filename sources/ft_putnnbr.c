/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 16:37:56 by adu-pelo          #+#    #+#             */
/*   Updated: 2016/11/07 12:34:03 by adu-pelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	ft_putnnbr(uintmax_t nb, unsigned int len)
{
	if (!len)
		return ;
	if (nb >= 10)
	{
		ft_putnnbr(nb / 10, len--);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
}
