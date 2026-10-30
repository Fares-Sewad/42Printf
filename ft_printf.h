/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:42:02 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/30 03:09:51 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *str, ...);
 int 	ft_putchar(char c);
 unsigned int ft_put_usign_nbr(unsigned int n);
 long  ft_putnbr(int n);
 int	ft_putstr(char *s);
int	ft_strlen(const char *str);

# endif