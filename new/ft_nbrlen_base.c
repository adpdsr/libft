/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 16:30:30 by adu-pelo          #+#    #+#             */
/*   Updated: 2016/10/11 21:14:46 by adu-pelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h> // test
#include <stdint.h> // uintmax_t

size_t	ft_nbrlen_base(uintmax_t nb, unsigned int base)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / base;
		len++;
	}
	return (len);
}

int		main(void)
{
	int nb0 = 0;
	int nb1 = 12345;
	int nb2 = 123456;
	int nb3 = 1234567;
	int nb4 = 12345678;

	printf("--- BASE 2  ---\n");
	printf("nb0 = %zu\n", ft_nbrlen_base(nb0, 2));
	printf("nb1 = %zu\n", ft_nbrlen_base(nb1, 2));
	printf("nb2 = %zu\n", ft_nbrlen_base(nb2, 2));
	printf("nb3 = %zu\n", ft_nbrlen_base(nb3, 2));
	printf("nb4 = %zu\n\n", ft_nbrlen_base(nb4, 2));
	
	printf("--- BASE 8  ---\n");
	printf("nb0 = %zu\n", ft_nbrlen_base(nb0, 8));
	printf("nb1 = %zu\n", ft_nbrlen_base(nb1, 8));
	printf("nb2 = %zu\n", ft_nbrlen_base(nb2, 8));
	printf("nb3 = %zu\n", ft_nbrlen_base(nb3, 8));
	printf("nb4 = %zu\n\n", ft_nbrlen_base(nb4, 8));
	
	printf("--- BASE 10 ---\n");
	printf("nb0 = %zu\n", ft_nbrlen_base(nb0, 10));
	printf("nb1 = %zu\n", ft_nbrlen_base(nb1, 10));
	printf("nb2 = %zu\n", ft_nbrlen_base(nb2, 10));
	printf("nb3 = %zu\n", ft_nbrlen_base(nb3, 10));
	printf("nb4 = %zu\n\n", ft_nbrlen_base(nb4, 10));
	
	printf("--- BASE 16 ---\n");
	printf("nb0 = %zu\n", ft_nbrlen_base(nb0, 16));
	printf("nb1 = %zu\n", ft_nbrlen_base(nb1, 16));
	printf("nb2 = %zu\n", ft_nbrlen_base(nb2, 16));
	printf("nb3 = %zu\n", ft_nbrlen_base(nb3, 16));
	printf("nb4 = %zu\n", ft_nbrlen_base(nb4, 16));
	
	return (0);
}
