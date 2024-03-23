#include "../ft_printf.h"

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

int ft_printchar(char c)
{
    write(1, &c, 1);
    return 1;
}


// converte e imprime na tela
// retorna um numero de caracteres printados
int	ft_conversion(va_list args, const char format)
{
	if (format == 'c')
        return (ft_printchar(va_arg(args, int)));
    return(0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	size_t	idx;

	if (!format)
		return (-1);
	len = 0;
	idx = 0;
	va_start(args, format);
	while (format[idx])
	{
		if (format[idx] == '%')
		{
			len += ft_conversion(args, format[idx + 1]);
			idx++;
		}
		// depois mudar p else:
		else if (format[idx] != '%')
			len += ft_printchar(format[idx]);
		idx++;
	}
	va_end(args);
	return (len);
}