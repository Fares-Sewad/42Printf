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

# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_put_usign_nbr(unsigned int n);
int ft_putnbr(int n);
int ft_putstr(char *s);
int ft_strlen(char *str);
int ft_hex_dec(size_t n, int chr);
int ft_void_hex(void *v);

# endif