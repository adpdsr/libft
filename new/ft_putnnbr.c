/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 16:37:56 by adu-pelo          #+#    #+#             */
/*   Updated: 2016/10/18 15:57:08 by adu-pelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdint.h> // uintmax_t
#include <stdio.h> // test

void	ft_putchar(char c);

void	ft_putnnbr(uintmax_t nb, unsigned int len) // a mettre en intmax_t
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

int		main(void)
{
	int nb0 = 0;
	int nb1 = 12345;
	int nb2 = 123456;
	int nb3 = 1234567;
	int nb4 = 12345678;

	ft_putnnbr(nb0, 0);
	printf("\n");
	ft_putnnbr(nb1, 0);
	printf("\n");
	ft_putnnbr(nb2, 0);
	printf("\n");
	ft_putnnbr(nb3, 0);
	printf("\n");
	ft_putnnbr(nb4, 0);
	printf("\n");
	
	ft_putnnbr(nb0, 1);
	printf("\n");
	ft_putnnbr(nb1, 1);
	printf("\n");
	ft_putnnbr(nb2, 1);
	printf("\n");
	ft_putnnbr(nb3, 1);
	printf("\n");
	ft_putnnbr(nb4, 1);
	printf("\n");
	
	ft_putnnbr(nb0, 10);
	printf("\n");
	ft_putnnbr(nb1, 10);
	printf("\n");
	ft_putnnbr(nb2, 10);
	printf("\n");
	ft_putnnbr(nb3, 10);
	printf("\n");
	ft_putnnbr(nb4, 10);
	printf("\n");
	
	return (0);
}
