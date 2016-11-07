/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 16:37:48 by adu-pelo          #+#    #+#             */
/*   Updated: 2016/11/07 12:34:54 by adu-pelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	ft_putnnbr_base(uintmax_t nb, unsigned int len, unsigned int base)
{
	if (!len)
		return ;
	if (nb >= base)
	{
		ft_putnnbr_base(nb / base, len--, base);
		ft_putnnbr_base(nb % base, len--, base);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'a');
	}
}
