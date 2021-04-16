/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:11:36 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/06 15:53:27 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(char *vec, int n2)
{
	int		i;

	i = 0;
	while (i < n2)
	{
		ft_putchar(vec[i]);
		i++;
	}
	if (vec[0] < (58 - n2))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	verify_num(char x, int n, int n2, char *vec)
{
	char	i;

	i = x;
	if (n == 0)
	{
		print_num(vec, n2);
		return ;
	}
	while (i != 58)
	{
		vec[n2 - n] = i;
		verify_num(i + 1, n - 1, n2, vec);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	vec[10];
	int		n2;
	int		i;

	if ((n > 0) && (n < 10))
	{
		n2 = n;
		i = 0;
		while (i <= 9)
		{
			vec[i] = 48;
			i++;
		}
		verify_num(48, n, n2, vec);
		ft_putchar(10);
	}
	else
	{
		return ;
	}
}
