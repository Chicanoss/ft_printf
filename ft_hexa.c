/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:51:02 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/25 14:31:54 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(uint64_t str, char c)
{
	int	i;
	int	n;

	n = str;
	i = 0;
	if (str == 0)
		return (1);
	while (str != 0)
	{
		str = str / 16;
		i++;
	}
	if (c != 'p')
	{
		if (i > 8)
		{	
			return (8);
		}
	}
	return (i);
}

int	ft_hexa(uint64_t str, char c)
{
	char	*base;
	char	*base_maj;
	char	new_str[16];
	int		i;

	base = "0123456789abcdef";
	base_maj = "0123456789ABCDEF";
	i = len(str, c);
	new_str[i] = '\0';
	while (i > 0)
	{
		i--;
		if (c == 'x' || c == 'p')
			new_str[i] = base[str % 16];
		if (c == 'X')
			new_str[i] = base_maj[str % 16];
		str = str / 16;
	}
	while (new_str[i] != '\0')
		write(1, &new_str[i++], 1);
	return (i);
}
