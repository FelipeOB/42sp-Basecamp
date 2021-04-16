#include "../../ex03/ft_div_mod.c"
#include <stdio.h>

int main (void)
{
	int n;
	n = 22;

	int m;
	m = -5;

	int div;

	int mod;

	int *pdiv;
	pdiv = &div;

	int *pmod;
	pmod = &mod;

	ft_div_mod(n, m, pdiv, pmod);
	printf("%d", div);
	printf("\n");
	printf("%d", mod);
	printf("\n");

	return (0);
}