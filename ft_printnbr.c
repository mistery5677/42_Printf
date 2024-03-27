#include "./ft_printf.h"

size_t divide_nbrbase(unsigned long long n, int base) //Count numbers;
{
    size_t len;

    len = 0;
    while(n > 0)
    {
        n = n/base;
        len++;
    }
    return len;
}

size_t ft_printnbr(long int nbr)
{
    size_t len;

    len = 0;

    ft_putnbr_fd(nbr, 1);
    len = divide_nbrbase(nbr, 10);
    return len;
}

size_t ft_print_unsigned(unsigned int nbr)
{
    size_t len;

    len = 0;
    len = divide_nbrbase(nbr, 10);
    if(nbr >= 10)
    {
        ft_print_unsigned(nbr / 10);
        nbr = nbr % 10;
    }
    if(nbr <= 9)
    {
        nbr = nbr + '0';
        write(1, &nbr, 1);
    }
    return len;
}

size_t ft_print_hex(unsigned long long num, int format)
{
    size_t len;

    len = divide_nbrbase(num, 16);
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
    return len;
}