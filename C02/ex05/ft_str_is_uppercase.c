/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:10:45 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/13 18:36:49 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_nonalpha2(int n)
{
	if ((n > 64 && n < 91) || (n > 96 && n < 123))
		return (1);
	return (0);
}

int		ft_char_is_lowercase(int n)
{
	if (n > 96 && n < 123)
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_char_is_nonalpha2((int)str[i])))
			return (0);
		if (ft_char_is_lowercase((int)str[i]))
			return (0);
		i++;
	}
	return (1);
}
