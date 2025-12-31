#include "../include/libft.h"

void    *ft_memset(void *b, int c, unsigned long len)
{
    int i;
    unsigned char *tmp;
    tmp = b;
    i = 0;

    while(i < len)
    {
        tmp[i] = (unsigned char)c;
        i ++;
    }
    return (b);
}