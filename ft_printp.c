/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:54:36 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/23 18:56:06 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long long nb)
{
	int	count;

	count = 0;
	count = ft_putstr_mod("0x");
	count += ft_hexa(nb, 'x');
	return(count );
	
}