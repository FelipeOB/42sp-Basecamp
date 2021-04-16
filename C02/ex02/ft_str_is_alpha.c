/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:03:48 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/12 13:00:36 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_char_is_alpha(int n)
{
	if ((n > 64 && n < 91) || (n > 96 && n < 123))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_alpha((int)str[i]))
			return (0);
		i++;
	}
	return (1);
}
