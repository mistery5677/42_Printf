#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while(s[i])
    {
        if(!(write(fd, &s[i], 1) == 1))
            return ;
        i++;
    }
}
