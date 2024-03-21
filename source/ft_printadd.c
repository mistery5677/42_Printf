#include "../ft_printf.h"

void ft_put_add(long num)
{
    if(num >= 16)
    {
        ft_put_add(num / 16);
        num = num % 16;
    }
    if(num <= 9)
        ft_putchar(num + '0');
    else
        ft_putchar((num + 'a') - 10);
}

void ft_printadd(unsigned long long str)
{
    write(1, "0x", 2);
    ft_put_add(str);
}