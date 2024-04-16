#include "./ft_printf.h"

size_t ft_printstr(const char *str)
{
    int i;

    i = 0;
    if(!str)
        return ft_printstr("(null)");
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return i;
}
