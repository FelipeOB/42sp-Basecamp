/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:13:45 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/12 17:27:13 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_printable(int n)
{
	if (n > 31 && n < 127)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_printable((int)str[i]))
			return (0);
		i++;
	}
	return (1);
}
