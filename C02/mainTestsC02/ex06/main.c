#include "../../ex06/ft_str_is_printable.c"

#include <stdio.h>

int main(void)
{
	char src[] = "HELLO WORLD";
	unsigned int n ;
	
	 n = ft_str_is_printable(src);

	printf("%d", n);

	return (0);
}