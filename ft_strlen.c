/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:41:42 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/30 03:03:29 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

/*int	main(void)
{
//#include <unistd.h>
//#include <stdio.h>
char name[] = "123456";
printf("this is count = %d", ft_strlen(name));

//	cc -Wall -Wextra -Werror
}*/
