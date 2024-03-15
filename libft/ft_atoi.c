#include "libft.h"

int ft_atoi(const char *nptr)
{
    size_t i;
    int nbr;
    int signal;

    signal = 1;
    i = 0;
    nbr = 0;
    while((nptr[i] >= 9 && nptr[i] <= 13) || nptr [i] == 32)
        i++;
    if(nptr[i] == '+' || nptr[i] == '-')
    {
        if(nptr[i] == '-')
            signal *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        nbr = (nbr * 10) + (nptr[i] - '0');
        i++;
    }    
    return nbr * signal;
}