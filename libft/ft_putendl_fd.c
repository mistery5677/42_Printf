#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
       ft_putstr_fd(s, fd);
       if(!(write(fd, "\n", 1) == 1))
                return ;
}
