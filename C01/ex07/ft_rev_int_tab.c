/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:03:20 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/09 12:21:25 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tabrev[size];
	int i;

	i = 0;
	while (i < size)
	{
		tabrev[i] = tab[(size - i) - 1];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tabrev[i];
		i++;
	}
}
