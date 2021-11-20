/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:36:51 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/20 16:51:14 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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
			if (str[i] == 'd')
			{
				count += ft_putnbr_mod(va_arg(ap, int));
			}
			if (str[i] == 'c')
			{
				count += ft_putchar_mod(va_arg(ap, int));
			}
			if (str[i] == 's')
			{
				count += ft_putstr_mod(va_arg(ap, char	*));
			}
			//printf("valeur de i %zu" , i);
		}
		else
		{
			count++;
			write(1, &str[i], 1);
		}
		i++;
	}
	//printf("valeur de count : %d\n" , count);
	return(count);
va_end(ap);
}
/*int main(void)
{
	ft_printf(" %d ", -100);
	return 0;
}*/