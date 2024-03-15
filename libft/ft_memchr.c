#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
        size_t i;
        unsigned char *copy_s;
        unsigned char copy_c;

        copy_s = (unsigned char *)s;
        copy_c = (unsigned char )c;
        i = 0;
        while(i < n)
        {
                if(copy_s[i] == copy_c)
                        return (void *)(s + i);
                i++;
        }
        return NULL;
}