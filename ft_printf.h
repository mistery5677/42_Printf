#ifndef FT_PRINTF_H
#define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int ft_printf(const char *, ...);
int ft_putchar(char c);
void ft_printstr(char *str);
void ft_printadd(unsigned long long str);
void ft_printnbr(long int nbr);
void ft_print_unsigned(unsigned int nbr);
void ft_print_hex(unsigned int num, int format);

#endif 