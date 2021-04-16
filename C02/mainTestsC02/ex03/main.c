#include "../../ex03/ft_str_is_numeric.c"

#include <stdio.h>

int main(void)
{
	char src[] = "12345";
	unsigned int n ;
	
	 n = ft_str_is_numeric(src);

	printf("%d", n);

	return (0);
}