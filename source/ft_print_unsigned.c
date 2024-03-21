#include "../ft_printf.h"

void ft_print_unsigned(unsigned int nbr)
{
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
}