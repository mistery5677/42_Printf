#include "libft.h"
#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
        unsigned i;

        i = 0;
        if (!s)
		return ;
        while(s[i])
        {
                f(i, s + i);
                i++;
        }
}

/*void my_function(unsigned int index, char *character) 
{
        *character = *character + 1;
}

int main() {
    char strmapi_string[] = "Hello";
    printf("Input string: %s\n", strmapi_string);

    ft_striteri(strmapi_string, &my_function);

    printf("Result: %s\n", strmapi_string);
}*/