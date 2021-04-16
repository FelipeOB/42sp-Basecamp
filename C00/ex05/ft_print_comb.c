/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:42:26 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/06 19:21:19 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_verify_num(char c, char d, char e)
{
	if (e != 50)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(e);
}

void	ft_print_comb(void)
{
	int		c;
	int		d;
	int		e;

	c = 48;
	while (c <= 57)
	{
		d = c + 1;
		while (d <= 57)
		{
			e = d + 1;
			while (e <= 57)
			{
				ft_verify_num(c, d, e);
				e++;
			}
			d++;
		}
		c++;
	}
}
