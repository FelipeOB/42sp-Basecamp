#include "../../ex08/ft_sort_int_tab.c"
#include <stdio.h>

void ft_print(int *tab, int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int main (void)
{
	int tab[10] = {3, 4, 1, 2, 0, 9, 7, 5, 6, 8};
	int size = 10;
	
	ft_print(tab, size);
	printf("\n");
	ft_sort_int_tab(tab, size);
	ft_print(tab, size);
	printf("\n");
}
