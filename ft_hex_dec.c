#include "ft_printf.h"

int ft_hex_dec(size_t n, int chr)      
{
    char c;
    int len;

    len = 0;
    if (n >= 16)
        len = ft_hex_dec(n / 16, chr);
    if (n % 16 < 10)
        c = (n % 16) + '0';
    else
    {
        if (chr == 'x')
            c = (n % 16) - 10 + 'a';
        else if (chr == 'X')
            c = (n % 16) - 10 + 'A';
    }
    write(1, &c, 1);
    len++;
    return (len);
}