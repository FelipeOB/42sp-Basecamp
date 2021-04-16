#include "../../ex05/ft_str_is_uppercase.c"

#include <stdio.h>

int main(void)
{
	char src[] = "HELLO WORLD";
	unsigned int n ;
	
	 n = ft_str_is_uppercase(src);

	printf("%d", n);

	return (0);
}