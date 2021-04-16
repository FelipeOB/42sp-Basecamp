#include "../../ex09/ft_strcapitalize.c"

#include <stdio.h>

int main(void)
{
	char src[] = "hello world how-you-doing+and 42me";
	unsigned int n ;

	printf("%s\n", src);
	ft_strcapitalize(src);
	printf("%s", src);

	return (0);
}