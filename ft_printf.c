/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:36:51 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/23 12:06:03 by rgeral           ###   ########.fr       */
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
			if (str[i] == 'd' || str[i] == 'i')
				count += ft_putnbr_mod(va_arg(ap, int));
			if (str[i] == 'c')
				count += ft_putchar_mod(va_arg(ap, int));
			if (str[i] == 's')
				count += ft_putstr_mod(va_arg(ap, char	*));
			if (str[i] == 'x' || str[i] == 'X')
				count += ft_hexa(va_arg(ap, uint64_t), str[i]);
			
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
int main(void)
{
	ft_printf("%u", -1);
	printf("\n%u" , -1);
	return 0;
}