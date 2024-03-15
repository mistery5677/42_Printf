#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
        char *substr;
        size_t i;

        i = 0;
        substr = malloc((len + 1) * sizeof(char));
        if(substr == NULL || !s)
                return NULL;
        while(i + start < ft_strlen(s) && i < len)
        {
                substr[i] = s[start + i];
                i++;
        }
        substr[i] = '\0';
        return substr;
}