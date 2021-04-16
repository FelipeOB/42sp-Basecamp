/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:51:42 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/05 16:42:09 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_recursivly(unsigned int n2)
{
	if (n2 <= 9)
	{
		ft_putchar(n2 + 48);
	}
	else
	{
		print_recursivly(n2 / 10);
		ft_putchar((n2 % 10) + 48);
	}
}

void	ft_putnbr(int n)
{
	unsigned int	n2;

	if (n < 0)
	{
		n2 = (unsigned int)(n * -1);
		ft_putchar('-');
		print_recursivly(n2);
	}
	else
	{
		n2 = (unsigned int)n;
		print_recursivly(n);
	}
}
