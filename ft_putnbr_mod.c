/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:09:32 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/23 12:05:50 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

unsigned int	ft_module_fd(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
int	ft_putnbr_mod(int n)
{
	unsigned int	num;
	int				count;

	count = 0;
	if (n < 0)
	{
		ft_putchar_mod('-');
		count++;
	}
	num = ft_module_fd(n);
		while (n > 10)
	{
		n = n / 10;
		count++;
	}
		while (ft_module_fd(n) >= 10)
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
	//printf("valeur de count putnbr : %d\n" , count);
	return (count + 1);
}
