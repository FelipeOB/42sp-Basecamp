/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 09:55:06 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/06 19:21:24 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_verify_num(int c, int d)
{
	if ((c != 00) || (d != 01))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar((c / 10) + 48);
	ft_putchar((c % 10) + 48);
	ft_putchar(' ');
	ft_putchar((d / 10) + 48);
	ft_putchar((d % 10) + 48);
}

void	ft_print_comb2(void)
{
	int		c;
	int		d;

	c = 0;
	while (c <= 99)
	{
		d = c + 1;
		while (d <= 99)
		{
			ft_verify_num(c, d);
			d += 1;
		}
		c += 1;
	}
}
