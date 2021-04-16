#include "../../ex00/ft_strcpy.c"

#include <stdio.h>

int main(void)
{
	char src[] = "Hello World!";
	char dest[] = "Goodby World!";
	
	ft_strcpy(dest, src);

	printf("%s", dest);

	return (0);
}