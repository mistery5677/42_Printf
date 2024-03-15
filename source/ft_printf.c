#include "../ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;

    va_start(args, format);
    if(*format == 'd')
        return 1;
    else
        return 0;
    va_end(args);
}