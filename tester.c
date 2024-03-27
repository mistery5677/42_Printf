
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

    ft_printf("Testing pointer address\n");
    printf("original: %p\n", &a);
    ft_printf("mine: %p\n\n", &a);

    int num = 92;
    ft_printf("Testing decimal number\n");
    printf("original: %d\n", 42);
    ft_printf("mine: %d %d\n\n", 42, 123.45);

    ft_printf("Testing decimal integer\n");
    printf("original: %i\n", num);
    ft_printf("mine: %i\n\n", num);

    unsigned int num2 = 98;
    ft_printf("Testing unsigned int\n");
    printf("original: %u\n", num2);
    ft_printf("mine: %u\n\n", num2);

    unsigned int num3 = -609396;
    ft_printf("Testing base hexadecimal lower\n");
    printf("original: %x\n", num3);
    ft_printf("mine: %x\n\n", num3);

    ft_printf("Testing base hexadecimal upper\n");
    printf("original: %X\n", num3);
    ft_printf("mine: %X\n\n", num3);
}*/

int main()
{
    // 13 letras na frase
    int teste = 1923;
    size_t i = ft_printf("hello world %d\n", teste);
    printf("tamanho = %ld\n", i);

    char teste2 = 'a';
    size_t a = ft_printf("hello world %c\n", teste2);
    printf("tamanho = %ld\n", a);

    unsigned int teste3 = 1234567;
    size_t b = ft_printf("hello world %u\n", teste3);
    printf("tamanho = %ld\n", b);

    unsigned int teste4 = 1;
    size_t c = ft_printf("hello world %x\n", teste4);
    printf("tamanho = %ld\n", c);

    char teste5 = 'a';
    size_t d = ft_printf("hello world %p\n", &teste5);
    ft_printf("tamanho %d\n", d);
    size_t original = printf("hello world %p\n", &teste5);
    printf("tamanho = %ld\n", original);

    char *teste6 = "123";
    size_t e = ft_printf("hello world %s\n", teste6);
    ft_printf("tamanho %d\n", e);
    size_t original2 = printf("hello world %s\n", teste6);
    printf("tamanho = %ld\n", original2);
}   