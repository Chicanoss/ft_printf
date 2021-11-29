/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:36:51 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/29 11:01:17 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_condition(va_list ap, const char *str, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'd' || str[i] == 'i')
		count += ft_putnbr_mod(va_arg(ap, int));
	else if (str[i] == 'c')
		count += ft_putchar_mod(va_arg(ap, int));
	else if (str[i] == 's')
		count += ft_putstr_mod(va_arg(ap, char *));
	else if (str[i] == 'x' || str[i] == 'X')
		count += ft_hexa(va_arg(ap, int), str[i]);
	else if (str[i] == 'u')
		count += ft_printu(va_arg(ap, unsigned int));
	else if (str[i] == 'p')
		count += ft_printp(va_arg(ap, unsigned long long));
	else if (str[i] == '%')
		count += ft_putchar_mod(str[i]);
	else
		count += ft_putchar_mod(str[i]);
	return (count);
}

int	ft_printf(const char	*str, ...)
{
	va_list	ap;
	size_t	i;
	int		count;

	va_start(ap, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			count += ft_condition(ap, str, i);
		}
		else
			count += ft_putchar_mod(str[i]);
		i++;
	}
	va_end (ap);
	return (count);
}

/*int main(void)
{
	ft_printf(" %");
	printf("\n");
	printf(" %");
	return 0;
}*/