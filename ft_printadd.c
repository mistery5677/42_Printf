#include "./ft_printf.h"

void ft_put_add(unsigned long long num)
{
    if(num > 16)
    {
        ft_put_add(num / 16);
        num = num % 16;
    }
    if(num <= 9)
        num = num + '0';
    else 
        num = num + 'a' - 10;
    write(1, &num, 1);
}


void ft_printadd(unsigned long long str)
{
    write(1, "0x", 2);
    ft_put_add(str);
}