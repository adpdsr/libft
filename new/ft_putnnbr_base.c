/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 16:37:48 by adu-pelo          #+#    #+#             */
/*   Updated: 2016/10/18 15:48:02 by adu-pelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdint.h> // uintmax_t
#include <stdio.h> // test

void    ft_putchar(char c);

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

int     main(void)
{
	int nb0 = 0;
	int nb1 = 12345;
	int nb2 = 123456;
	int nb3 = 1234567;
	int nb4 = 12345678;

	ft_putnnbr_base(nb0, 0, 2);
	printf("\n");
	ft_putnnbr_base(nb1, 0, 2);
	printf("\n");
	ft_putnnbr_base(nb2, 0, 2);
	printf("\n");
	ft_putnnbr_base(nb3, 0, 2);
	printf("\n");
	ft_putnnbr_base(nb4, 0, 2);
	printf("\n");

	ft_putnnbr_base(nb0, 1, 10);
	printf("\n");
	ft_putnnbr_base(nb1, 1, 10);
	printf("\n");
	ft_putnnbr_base(nb2, 1, 10);
	printf("\n");
	ft_putnnbr_base(nb3, 1, 10);
	printf("\n");
	ft_putnnbr_base(nb4, 1, 10);
	printf("\n");

	ft_putnnbr_base(nb0, 10, 16);
	printf("\n");
	ft_putnnbr_base(nb1, 10, 16);
	printf("\n");
	ft_putnnbr_base(nb2, 10, 16);
	printf("\n");
	ft_putnnbr_base(nb3, 10, 16);
	printf("\n");
	ft_putnnbr_base(nb4, 10, 16);
	printf("\n");

	return (0);
}
