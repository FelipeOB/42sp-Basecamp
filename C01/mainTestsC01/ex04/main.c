#include "../../ex04/ft_ultimate_div_mod.c"
#include <stdio.h>

int main (void)
{
	int n;
	n = 22;

	int m;
	m = 5;
	
	int *pdiv;
	pdiv = &n;

	int *pmod;
	pmod = &m;

	printf("%d", n);
	printf("\n");
	printf("%d", m);
	printf("\n");

	ft_ultimate_div_mod(pdiv, pmod);
	
	printf("%d", n);
	printf("\n");
	printf("%d", m);
	printf("\n");

	return (0);
}