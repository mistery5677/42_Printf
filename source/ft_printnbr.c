#include "../ft_printf.h"

void ft_printnbr(long int nbr)
{
    if(nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    if(nbr > 9)
    {
        ft_printnbr(nbr / 10);
        nbr = nbr % 10;
    }
    if(nbr < 10)
    {
        nbr += '0';
        write(1, &nbr, 1);
    }
}