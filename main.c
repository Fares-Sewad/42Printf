#include "ft_printf.h"

int main(void)
{
    int i;
    int j;
    int num = 2559826;

    i = printf("Pointer: %p\n", (void *)&num);
    j = ft_printf("Pointer: %p\n", (void *)&num);

    printf("Original count: %d\n", i);
    printf("Mine count: %d\n", j);
    return (0);
}