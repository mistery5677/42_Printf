#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
        size_t i;
        unsigned char *str;

        i = 0;
        str = (unsigned char *)s;
        while(i < n)
        {
                str[i] = (unsigned char)c;
                i++;
        }
        return str;
}