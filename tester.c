#include "ft_printf.h"


int main()
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

    ft_printf("Testing pointer address\n");
    printf("original: %p\n", &a);
    ft_printf("mine: %p\n\n", &a);

    int num = 92;
    ft_printf("Testing decimal number\n");
    printf("original: %d\n", num);
    ft_printf("mine: %d\n\n", num);

    ft_printf("Testing decimal integer\n");
    printf("original: %i\n", num);
    ft_printf("mine: %i\n\n", num);

    unsigned int num2 = 98;
    ft_printf("Testing unsigned int\n");
    printf("original: %u\n", num2);
    ft_printf("mine: %u\n\n", num2);

    int num3 = 3000;
    ft_printf("Testing base hexadecimal lower\n");
    printf("original: %x\n", num3);
    ft_printf("mine: %x\n\n", num3);

    ft_printf("Testing base hexadecimal upper\n");
    printf("original: %X\n", num3);
    ft_printf("mine: %X\n\n", num3);
}