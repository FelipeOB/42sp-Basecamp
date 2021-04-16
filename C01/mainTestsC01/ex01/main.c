#include "../../ex01/ft_ultimate_ft.c"
#include <stdio.h>

int main (void)
{
	int n;
	n = 0;
	
	int *nbr;
	nbr = &n;

	int **nbr2;
	nbr2 = &nbr;

	int ***nbr3;
	nbr3 = &nbr2;

	int ****nbr4;
	nbr4 = &nbr3;

	int *****nbr5;
	nbr5 = &nbr4;

	int ******nbr6;
	nbr6 = &nbr5;

	int *******nbr7;
	nbr7 = &nbr6;

	int ********nbr8;
	nbr8 = &nbr7;

	int *********nbr9;
	nbr9 = &nbr8;
	
	printf("%d", n);
	ft_ultimate_ft(nbr9);
	printf("%d", n);

	return (0);
}