/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:54:03 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/12 18:27:16 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_char_is_nonprintable(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

void	ft_putchar_non_printable(char c)
{
	unsigned int n;

	if (c < 0)
	{
		n = 255 - (c * -1) + 1;
	}
	else
	{
		n = c;
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
		return ;
	}
	if (n > 9 && n < 16)
	{
		ft_putchar(n + 87);
		return ;
	}
	ft_putchar_non_printable(n / 16);
	ft_putchar_non_printable(n - ((n / 16) * 16));
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_nonprintable(str[i]))
		{
			ft_putchar('\\');
			if (str[i] < 16 && str[i] > -1)
				ft_putchar('0');
			ft_putchar_non_printable(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
