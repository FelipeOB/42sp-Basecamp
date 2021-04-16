#include "../../ex07/ft_strupcase.c"

#include <stdio.h>

int main(void)
{
	char src[] = "hello world";
	unsigned int n ;

	printf("%s\n", src);
	ft_strupcase(src);
	printf("%s", src);

	return (0);
}