#ifndef FT_PRINTF_H
#define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int ft_printf(const char *, ...);
int ft_putchar(char c);
size_t ft_printstr(char *str);
size_t ft_printnbr(long int nbr);
size_t ft_print_unsigned(unsigned int nbr);
size_t ft_print_hex(unsigned long long num, int format);
size_t ft_count_words(char * str);

#endif 