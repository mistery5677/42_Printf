#include "ft_printf.h"

int main()
{
    ft_printf(" %d\n", ft_printf("%d"));
    ft_printf(" %d\n", ft_printf("%d"));
    printf(" %d\n", printf("%d%"));
    printf(" %d\n\n", printf("%d%"));

    ft_printf(" %d\n", ft_printf("%"));
    ft_printf(" %d\n", ft_printf("%"));
    printf(" %d\n", printf("%"));
    printf(" %d\n\n", printf("%"));

    ft_printf(" %d\n", ft_printf(NULL));
    ft_printf(" %d\n", ft_printf("%d%c", 1, 'a'));
    printf(" %d\n", printf(NULL));
    printf(" %d\n", printf("%d%c", 1, 'a'));
}