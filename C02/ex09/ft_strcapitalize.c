/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:27:47 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/12 18:26:12 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_position(char *str, int i)
{
	if (
		(str[i - 1] > 96 && str[i - 1] < 123) ||
		(str[i - 1] > 64 && str[i - 1] < 91) ||
		(str[i - 1] > 47 && str[i - 1] < 58))
		return (1);
	return (0);
}

void	ft_charcapitalize(char *str, int i)
{
	if (str[i] > 96 && str[i] < 123)
		str[i] = str[i] - 32;
}

void	ft_charlowercase(char *str, int i)
{
	if (str[i] > 64 && str[i] < 91)
		str[i] = str[i] + 32;
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
		{
			if (!(ft_char_position(str, i)))
				ft_charcapitalize(str, i);
			else
				ft_charlowercase(str, i);
		}
		i++;
	}
	return (str);
}
