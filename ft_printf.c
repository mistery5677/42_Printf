#include "ft_printf.h"

size_t ft_count_words(char * str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

static int ft_conversion(va_list args, const char format)
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

    if(format == NULL)
        return -1;
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
    ft_printf("\n------> Testing len without arguments <------\n\n");
    int teste = printf("original: ");
    printf("%d\n", teste);
    int teste2 = ft_printf("mine: ");
    printf("%d\n\n", teste2);
    
    ft_printf("Testing without words\n");
    char teste3 = 0;
    teste = printf("%c", teste3);
    printf("%d\n", teste);
    teste2 = ft_printf("");
    printf("%d\n\n", teste2);

    ft_printf("Testing spaces\n");
    teste = printf("\t\n\v\f\r");
    printf("%d\n", teste);
    teste2 = ft_printf("\t\n\v\f\r");
    printf("%d\n\n", teste2);

    /*ft_printf("Testing with NULL\n");
    teste = printf(NULL);
    printf("%d\n", teste);
    teste2 = ft_printf(NULL);
    ft_printf("%d\n\n", teste2); */

    ft_printf("------> Testing with arguments <------\n\n");
    ft_printf("--> Testing double percent <--\n");
    ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
    teste = ft_printf("mine --->%%");
    printf("%d\n", teste);
    teste2 = printf("original --->%%");
    printf("%d\n\n", teste2);

    teste = ft_printf("mine --->%%%%");
    printf("%d\n", teste);
    teste2 = printf("original --->%%%%");
    printf("%d\n\n", teste2);

    teste = ft_printf("mine --->%%%%%%%%%%");
    printf("%d\n", teste);
    teste2 = printf("original --->%%%%%%%%%%");
    printf("%d\n\n", teste2);

    ft_printf("--> Testing %%c <--\n");
    ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
    teste = ft_printf("mine:  %c  ", 'a');
    printf("words: %d\n", teste);
    teste2 = printf("original:  %c  ", 'a');
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %c%c%c%c%c  ", 'h', 'e', 'l', 'l', 'o');
    printf("words: %d\n", teste);
    teste2 = printf("original:  %c%c%c%c%c  ", 'h', 'e', 'l', 'l', 'o');
    printf("words: %d\n\n", teste2);

    /*char word = NULL;
    teste = ft_printf("mine: %c", word);
    printf("%d\n", teste);
    teste2 = printf("original: %c", word);
    printf("%d\n\n", teste2);*/

    teste = ft_printf("mine: %c", 48);
    printf("%d\n", teste);
    teste2 = printf("original: %c", 48);
    printf("%d\n\n", teste2);

    ft_printf("--> Testing %%d <--\n");
    ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
    teste = ft_printf("mine:  %d  ", 123);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %d  ", 123);
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %d  ", -123);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %d  ", -123);
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %d  ", 2147483647);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %d  ", 2147483647);
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %d  ", -2147483647);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %d  ", -2147483647);
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %d  ", 0);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %d  ", 0);
    printf("words: %d\n\n", teste2);

    ft_printf("--> Testing %%i <--\n");
    ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
    teste = ft_printf("mine:  %i  ", 123);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %i  ", 123);
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %i  ", -123);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %i  ", -123);
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %i  ", 2147483647);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %i  ", 2147483647);
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %i  ", -2147483647);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %i  ", -2147483647);
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %i  ", 0);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %i  ", 0);
    printf("words: %d\n\n", teste2);
    
    ft_printf("--> Testing %%u <--\n");
    ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");
    teste = ft_printf("mine:  %u  ", 123);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %u  ", 123);
    printf("words: %d\n\n", teste2);

    teste = ft_printf("mine:  %u  ", 2147483647);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %u  ", 2147483647);
    printf("words: %d\n\n", teste2);
    
    teste = ft_printf("mine:  %u  ", 1);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %u  ", 1);
    printf("words: %d\n\n", teste2);

    ft_printf("--> Testing %%x <--\n");
    ft_printf("\nEach test must have a difference of 4 in relation to the given value\n\n");

    teste = ft_printf("mine:  %x  ", 100);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %x  ", 100);
    printf("words: %d\n\n", teste2);
    
    teste = ft_printf("mine:  %x  ", 2147483647);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %x  ", -1);
    printf("words: %d\n\n", teste2);
    
    teste = ft_printf("mine:  %x  ", 2147483647);
    printf("words: %d\n", teste);
    teste2 = printf("original:  %x  ", 2147483647);
    printf("words: %d\n\n", teste2);
}   