#include "../ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    char word;
    int i;
    int next;

    i = 0;
    next = i + 1;
    word = 0;
    va_start(args, format);
    while(format[i])
    {
        word = format[i];
        next = i + 1;
        if(format[i] == '%')
        {
            if(format[next] == '%')
                ft_putchar(word);
            else if(format[next] == 'c')
            {
                word = va_arg(args, int);
                ft_putchar(word);
            }
            else if(format[next] == 's')
            {
                char *str;
                str = va_arg(args, char *);
                ft_printstr(str);
            }
            else if(format[next] == 'p')
                ft_printadd(va_arg(args, long));
            else if(format[next] == 'd' || format[next] == 'i')
                ft_printnbr(va_arg(args, int));
            else if(format[next] == 'u')
                ft_print_unsigned(va_arg(args, unsigned int));
            else if(format[next] == 'x')
                ft_print_hex(va_arg(args, unsigned int), 'a');
            else if(format[next] == 'X')
                ft_print_hex(va_arg(args, unsigned int), 'A');
            i++;
        }
        else
            ft_putchar(word);
        i++;
    }
    return 0;
}