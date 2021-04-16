#include "../../ex10/ft_strlcpy.c"

#include <stdio.h>

int                main(void)
{
    char            str[] = "Test Hub";
    int				n = sizeof(str)/sizeof(str[0]);
    char            buf[n];
    unsigned int    i;

    i = ft_strlcpy(buf, str, n);
    printf("size: %d\n", i);
    printf("buf value: '%s'\n", buf);
    printf("buf last character: '%c'\n", buf[n - 1]);

	return (0);
}