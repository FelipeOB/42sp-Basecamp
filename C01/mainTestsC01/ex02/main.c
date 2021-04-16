#include "../../ex02/ft_swap.c"
#include <stdio.h>

int main (void)
{
	int n;
	n = 5;

	int m;
	m = 10;

	int *a;
	a = &n;

	int *b;
	b = &m;

	printf("%d", n);
	printf("%d", m);
	ft_swap(a, b);
	printf("%d", n);
	printf("%d", m);

	return (0);
}