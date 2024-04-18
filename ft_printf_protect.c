#include "ft_printf.h"

int protect(const char * format)
{
        int i;
        int count;

        count = 0;
        i = -1;
        while(format[++i])
        {
                if(format[i] == '%' )
                {
                        count++;
                        i++;
                        if(format[i] == '%' || format[i] == 's' || format[i] == 'c' || format[i] == 'd' || format[i] == 'i' || format[i] == 'u' || format[i] == 'x' || format[i] == 'X' || format[i] == 'p')
                        {
                                count++;
                        }
                }    
        }   
        return count;
}