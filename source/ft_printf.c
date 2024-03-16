#include "../ft_printf.h"

int ft_printf(const char *str, ...)
{
    va_list args;
    int i;
    int next;
    char word;

    i = 0;
    next = i + 1;
    va_start(args, str);
    while(str[i])
    {
        next = i + 1;
        word =  str[i];
        if(str[i] == '%' && (str[next] == 'c' || str[next] == '%'))
        {
            if(str[next] == '%')
                next++; //Para poupar linhas (funcional)
            else
                word = va_arg(args, int);
            i++;
        }
        ft_putchar(word);
        i++;
    }
    va_end(args);
    return 0;
}