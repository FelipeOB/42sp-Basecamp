#include "../../ex07/ft_rev_int_tab.c"
#include <stdio.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print(int *tab, int size)
{
	int i = 0;
	while(i < size)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
}

int main (void)
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 10;
	
	ft_print(tab, size);
	ft_rev_int_tab(tab, size);
	printf("\n");
	ft_print(tab, size);
	printf("\n");
}