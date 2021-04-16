#include "../../ex01/ft_strncpy.c"

#include <stdio.h>

int main(void)
{
	char src[] = "Hello World!";
	char dest[10];
	unsigned int n = 5;
	
	ft_strncpy(dest, src, n);

	printf("%s", dest);

	return (0);
}