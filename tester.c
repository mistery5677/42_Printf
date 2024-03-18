#include "ft_printf.h"


/*int main()
{
    ft_printf("TESTING FT_PRINTF\n\n");
    
    ft_printf("Testing without variables\n");
    printf("original --> hello world\n");
    ft_printf("mine --> hello world\n\n");    
    
    char *str2 = "hello world";
    ft_printf("Testing with string\n");
    printf("original --> %s\n", str2);
    ft_printf("mine --> %s\n\n", str2);

    char a = 'a';
    ft_printf("Testing with char variables\n");
    printf("original --> %chello %cwor%%cld%c\n", a, a, a);
    ft_printf("mine --> %chello %cwor%%cld%c\n\n", a, a, a);
}*/

int main()
{
    void *str = "hello";
    printf("tete: %p", str);
}