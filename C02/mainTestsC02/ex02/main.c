#include "../../ex02/ft_str_is_alpha.c"

#include <stdio.h>

int main(void)
{
	char src[] = "Hello World!";
	unsigned int n ;
	
	 n = ft_str_is_alpha(src);

	printf("%d", n);

	return (0);
}