/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:40:50 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/13 11:32:14 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_convertchar(char c)
{
	unsigned int n;

	if (c < 0)
		n = (255 - (c * -1)) + 1;
	else
		n = c;
	return (n);
}

int ft_strcmp(char *s1, char *s2)
{
	int  i;
	unsigned int n;
	unsigned int m;

	i = 0;		
	while((s1[i] != '\0') || (s2[i] != '\0'))
	{
		n = ft_convertchar(s1[i]);
		m = ft_convertchar(s2[i]);
		if (n != m)
			return (n - m);
		i++;
	}
	return (0);
}
