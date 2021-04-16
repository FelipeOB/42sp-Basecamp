#include "../../ex04/ft_str_is_lowercase.c"

#include <stdio.h>

int main(void)
{
	char src[] = "hello world";
	unsigned int n ;
	
	 n = ft_str_is_lowercase(src);

	printf("%d", n);

	return (0);
}