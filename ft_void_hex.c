#include "ft_printf.h"

static int ft_hex_dec_void(size_t n, int chr)      
{
    char c;
    int len;

    len = 0;
    if (n >= 16)
        len = ft_hex_dec_void(n / 16, chr);
    if (n % 16 < 10)
        c = (n % 16) + '0';
    else
    {
        if (chr == 'x')
            c = (n % 16) - 10 + 'a';
        else if (chr == 'X')
            c = (n % 16) - 10 + 'A';
    }
    chr = c;
    len++;
    return (len);
}

int ft_void_hex(void *v)
{
    size_t address;
    int temp;
    int len;

    temp = 16;
    len = 0;
    address = (size_t)v;
    temp = temp - ft_hex_dec_void(address, 'X');
    while(temp >= 1)
    {
        write(1, "0", 1);
        len++;
        temp--;
    }
    return (ft_hex_dec(address, 'X') + len);
}

/*
int main(void)
{
    int num = 42;
    int n;
    size_t address;

    address = (size_t)&num;

    printf("Pointer: %p\n", (void *)&num);
    printf("Size_t:  %llX\n", (unsigned long long)address);

    ft_hex_dec(address, 'x');

    write(1, "\n", 1);
}*/