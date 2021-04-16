#include "../../ex00/ft_ft.c"
#include <stdio.h>

int main (void)
{
	int n;
	n = 0;
	int *nbr;
	nbr = &n;
	printf("%d", n);
	ft_ft(nbr);
	printf("%d", n);

	return (0);
}