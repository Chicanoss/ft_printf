/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:54:55 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/25 11:52:51 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	unsigned int	num;
	int				count;

	count = 0;
	num = n;
	if (n == 0)
		count = 1;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	if (num >= 10)
	{
		ft_putnbr_mod(num / 10);
		ft_putnbr_mod(num % 10);
	}
	else
	{
		ft_putchar_mod(num + '0');
	}
	return (count);
}

int	ft_printu(unsigned int n)
{
	unsigned int	nb;
	int				i;

	nb = n;
	i = print_unsigned(nb);
	return (i);
}
