#include "../../ex11/ft_putstr_non_printable.c"

#include <stdio.h>

int        main(void)
{
    char *str, *str2;

    str = "Oi\nvoce esta bem?";
    str2 = "Mano bugou\vmeu\acodigo\f";

    ft_putstr_non_printable(str);
    write(1, "\n", 1);

    ft_putstr_non_printable(str2);
    write(1, "\n", 1);
}