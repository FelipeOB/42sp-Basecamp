#include "../../ex06/ft_strlen.c"
#include <stdio.h>

int main (void)
{
	char str[] = "String";
	int len;
	len = ft_strlen(str);
	printf("%d", len);
}