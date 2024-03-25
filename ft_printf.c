#include "./ft_printf.h"

/*int ft_printf(const char *format, ...)
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
}*/

///////////Nova versão/////////

/*int ft_check(char next, unsigned long long content)
{
    if(next == 'c')
        ft_putchar((char) content);
    else if(next == 'p')
        ft_printadd((long)content);
    else if(next == 'd' || next == 'i')
        ft_printnbr((int) content);
    else if(next == 'u')
        ft_print_unsigned((unsigned int)content);
    else if(next == 'x')
        ft_print_hex((unsigned int) content, 'a');
    else if(next == 'X')
        ft_print_hex((unsigned int)content, 'A');

    return 0;
}

int ft_printf(const char *format, ...)
{
    size_t i;
    unsigned int next;
    va_list args;

    va_start(args, format);
    i = -1;
    while(format[++i])
    {
        next = i + 1;
        if(format[i] == '%')
        {
            if(format[next] == '%')
                ft_putchar(format[i]);
            else
                ft_check(format[next], va_arg(args, unsigned int));
            i++;
        }
        else
            ft_putchar(format[i]);
    }
    va_end(args);
    return 0;
}*/

///////////Nova versão/////////

int ft_conversion(va_list args, const char format)
{
    int len;

    len = 0;
    if(format == 'c')
        len += ft_putchar(va_arg(args, int));
    else if(format == 'p')
        ft_printadd(va_arg(args, long));
    else if(format == 'd' || format == 'i')
        ft_printnbr(va_arg(args, int));
    else if(format == 'u')
        ft_print_unsigned(va_arg(args, unsigned int));
    else if(format == 'x')
        ft_print_hex(va_arg(args, unsigned int), 'a');
    else if(format == 'X')
        ft_print_hex(va_arg(args, unsigned int), 'A');
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

int main()
{
    ft_printf("hello");
}