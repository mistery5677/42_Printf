#include "ft_printf.h"

static size_t ft_divide_nbrbase(unsigned long long nbr, int base) //Count numbers;
{
    int len;

    len = 0;
    while (nbr != 0)
    {
        len++;
        nbr = nbr / base;
    }
    return len;
}

static void ft_put_add(unsigned long long nbr)
{

    if(nbr >= 16)
    {
        ft_put_add(nbr / 16);
        ft_put_add(nbr % 16);
    }
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
			ft_putchar_fd((nbr - 10 + 'a'), 1);
	}
}

int	ft_print_add(unsigned long long add)
{
	int	len;

	len = 0;
	if (!add)
		return ft_printstr("(nil)");
	len += ft_printstr("0x");
	if (add == 0)
		len += write(1, "0", 1);
	else
	{
		ft_put_add(add);
		len += ft_divide_nbrbase(add, 16);
	}
	return (len);
}
