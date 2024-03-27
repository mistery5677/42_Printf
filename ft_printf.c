#include "./ft_printf.h"

size_t ft_count_words(char * str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

int ft_conversion(va_list args, const char format)
{
    int len;

    len = 0;
    if(format == 'c')
        len += ft_putchar(va_arg(args, int)); //testado OK
     else if(format == 'd' || format == 'i')
        len += ft_printnbr(va_arg(args, int)); //testado OK
    else if(format == 'u')
        len += ft_print_unsigned(va_arg(args, unsigned int)); //testado OK
    else if(format == 'x')
        len += ft_print_hex(va_arg(args, unsigned long long), 'a'); //testado OK
    else if(format == 'X')
        len += ft_print_hex(va_arg(args, unsigned long long), 'A'); //testado OK
    else if(format == 'p') // testado OK
    {
        len += ft_printf("0x");
        len += ft_print_hex(va_arg(args, unsigned long long int), 'a'); 
    }
    else if(format == 's')
        len += ft_printstr(va_arg(args,char *));
    else if(format == '%')
        len += ft_putchar('%');
    return len;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
    size_t i;
	va_start(args, format);
    int len;

    len = 0;
    i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			len += ft_conversion(args, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
	}
	va_end(args);
	return (len);
}