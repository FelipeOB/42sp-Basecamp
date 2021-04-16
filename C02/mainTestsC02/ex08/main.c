#include "../../ex08/ft_strlowcase.c"

#include <stdio.h>

int main(void)
{
	char src[] = "HELLO WORLD";
	unsigned int n ;

	printf("%s\n", src);
	ft_strlowcase(src);
	printf("%s", src);

	return (0);
}