#include "./ft_printf.h"

void ft_print_hex(unsigned int num, int format)
{
    if(num > 16)
    {
        ft_print_hex(num / 16, format);
        num = num % 16;
    }
    if(num <= 9)
        num = num + '0';
    else 
        num = num + format - 10;
    write(1, &num, 1);
}
