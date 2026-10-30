/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 01:31:28 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/30 03:14:02 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 long  ft_putnbr(int n)
{
	long        num;
	char		c;
    static int len;

    len = 0;
	num = n;
	if (num < 0)
	{
		write (1, "-", 1);
		num *= -1;
        len++;
	}
	if (num / 10)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write (1, &c, 1);
    len++;
    
    return (len);  
}