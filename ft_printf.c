/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:36:51 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/23 18:51:34 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
int ft_printf(const char	*str, ...)
{
    va_list ap;
	size_t i;
	int		count;
	
	va_start(ap, str);
	i = 0;
	count = 0;

	while (str[i])
	{
		if(str[i] == '%')
		{
			i++;
			if (str[i] == 'd' || str[i] == 'i')
				count += ft_putnbr_mod(va_arg(ap, int));
			if (str[i] == 'c')
				count += ft_putchar_mod(va_arg(ap, int));
			if (str[i] == 's')
				count += ft_putstr_mod(va_arg(ap, char	*));
			if (str[i] == 'x' || str[i] == 'X')
				count += ft_hexa(va_arg(ap, int), str[i]);
			if (str[i] == 'u')
				count += ft_printu(va_arg(ap,unsigned int));
			if (str[i] == 'p')
				count += ft_printp(va_arg(ap, unsigned long long));
			//printf("valeur de i %zu" , i);
		}
		else
		{
			count++;
			write(1, &str[i], 1);
		}
		i++;
	}
	//printf("\nvaleur de count : %d\n" , count);
	return(count);
va_end(ap);
}
/*int main(void)
{
	ft_printf(" %p ", -1);
	printf(" %p ", -1);
	return 0;
}*/