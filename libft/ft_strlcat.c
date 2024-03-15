#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t len_src;
    size_t len_dst;
    size_t i;

    i = 0;
    len_src = ft_strlen(src);
    len_dst = ft_strlen(dst);
    if (size <= len_dst)
        return len_src + size;
    while(src[i] && i + len_dst < size - 1)
    {
        dst[len_dst + i] = src[i];
        i++;
    }
    dst[len_dst + i] = '\0';
    return len_dst + len_src;
}

/*#include <stdio.h>
int main()
{
    char dst_strlcat[20] = "rrrrrr";
    char *src_strlcat = "lorem ipsum dolor sit amet";

    printf("TESTING FT_STRLCAT \n\n");
    printf("antes: %s\n", dst_strlcat);
    ft_strlcat(dst_strlcat, src_strlcat, 15);
    printf("antes: %s\n", dst_strlcat);
    
}*/