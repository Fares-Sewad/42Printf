/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:59:56 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/29 10:59:56 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

//=============================*************************


static void	ft_putchar(char c, int *i)
{
	write(1, &c, 1);
    *(i)+=2;
}
static int	ft_putstr(char *s , int *i)
{
	write(1, s, ft_strlen(s));
    *(i)+=2;
    return (ft_strlen(s));
}
static void	ft_putnbr(int n, int *i)
{
	long        num;
	char		c;

	num = n;
	if (num < 0)
	{
		write (1, "-", 1);
		num *= -1;
	}
	if (num / 10)
		ft_putnbr(num / 10, i);
	c = num % 10 + '0';
	write (1, &c, 1);
    if (num < 10)
        *(i)+=2;
}
static void	ft_put_usign_nbr(unsigned int n, int *i)
{
	char		c;

	if (n / 10)
		ft_put_usign_nbr(n / 10, i);
	c = n % 10 + '0';
	write (1, &c, 1);
    if (n < 10)
        *(i)+=2;
}

int fff(char c)
{
    if( c == '%' || c == 'c' || c == 's' ||c == 'd' ||c == 'i' ||c == 'u' ||c == 'p' ||c == 'X' ||c == 'x' ||c == 'p' )
}
int ft_printf(const char *str, ...)
{
    va_list list;
    int  i;
    int len;

    va_start(list, str);
    i = 0;
    while(str[i])
    {
        if (str[i] == '%' && str[i + 1] == 'c')
            ft_putchar(va_arg(list, int), &i);

        else if (str[i] == '%' && str[i + 1] == 's')
            len = ft_putstr(va_arg(list, char *), &i) - 2;

        else if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i'))
            ft_putnbr(va_arg(list, int), &i);

        else if (str[i] == '%' && str[i + 1] == 'u')
            ft_put_usign_nbr(va_arg(list, unsigned int), &i);    
                         
        write(1, &str[i], 1);
        //checkcount(str[i],&i);
        i++;
    }
    va_end(list);
    return (i + len);
}

int main()
{
    int c;
    //ft_printf("hello %c : %s\nim %u years old ", 'f', "fares", 7458721);
    c = ft_printf("hi %s\n", "f");
    printf("%d\n", c);
}