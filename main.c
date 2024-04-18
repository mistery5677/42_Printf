#include "ft_printf.h"

int main()
{
	printf(" %d\n", ft_printf("%d%% ", 1));
	printf(" %d\n", printf("%d%% ", 1));
}