#include "./ft_printf.h"

size_t ft_printstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return i;
}