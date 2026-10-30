/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_usign_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 01:31:18 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/30 03:13:50 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 unsigned int ft_put_usign_nbr(unsigned int n)
{
	char		c;
    static int  len;

    len = 0;
	if (n / 10)
		ft_put_usign_nbr(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
    len++;
    return (len);
    
}