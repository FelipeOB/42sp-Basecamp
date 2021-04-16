/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:04:32 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/12 13:02:39 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_numeric(int n)
{
	if (n > 47 && n < 58)
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_numeric((int)str[i]))
			return (0);
		i++;
	}
	return (1);
}
