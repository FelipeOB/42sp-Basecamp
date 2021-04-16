/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:47:52 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/03 22:15:00 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_pattern1(int x, int x2, int y, int y2)
{
	if (x == x2 && y == y2)
	{
		ft_putchar('/');
	}
	else if (x == 1 && y == y2)
	{
		ft_putchar('\\');
	}
	else if (x == x2 && y == 1)
	{
		ft_putchar('\\');
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	print_pattern2(int x, int x2)
{
	if (x == x2 || x == 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int x2;
	int y2;

	x2 = x;
	y2 = y;
	while (y > 0)
	{
		x = x2;
		while (x > 0 && y > 0)
		{
			if (y == y2 || y == 1)
			{
				print_pattern1(x, x2, y, y2);
			}
			else
			{
				print_pattern2(x, x2);
			}
			x--;
		}
		ft_putchar(10);
		y--;
	}
}
