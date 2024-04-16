#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include "libft/libft.h"
# include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *, ...);
int ft_putchar(char c);
size_t ft_printstr(const char *str);
size_t ft_printnbr(int nbr);
size_t ft_print_unsigned(unsigned int nbr);
size_t ft_print_hex(unsigned long int num, int format);
int ft_print_add(unsigned long long nbr);

#endif 