/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:59:56 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/30 03:25:48 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int re_len_var(va_list *list, int chr)
{
    if(chr == 'c')
            return(ft_putchar(va_arg(*list, int)));
    else if (chr == 's')
            return(ft_putstr(va_arg(*list, char *)));
    else if (chr == 'd' || chr == 'i')
            return(ft_putnbr(va_arg(*list, int)));
    else if (chr == 'u')
            return(ft_put_usign_nbr(va_arg(*list, unsigned int)));
    else
        return (0);
} 
int ft_printf(const char *str, ...)
{
    va_list list;
    int  i;
    int len;

    va_start(list, str);
    i = 0;
    len = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '%' && str[i + 1])
        {
            len = re_len_var(&list, str[i + 1]);
        }
        else
        {
            write(1, &str[i], 1);
            i++;
        }
    }
    va_end(list);
    return (i + len);
}

int main()
{
    int c;
    //ft_printf("hello %c : %s\nim %u years old ", 'f', "fares", 7458721);
    c = ft_printf("hello %s world", "fares");
    printf("%d\n", c);
    return 0;
}