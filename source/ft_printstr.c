#include "../ft_printf.h"

void ft_printstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}