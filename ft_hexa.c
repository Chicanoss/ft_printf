/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:51:02 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/23 16:36:58 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>


int	len(uint64_t	str)
{
	int i;
	int n;

	n = str;
	i = 0;
	if (str == 0)
		return(1);	
	while (str != 0)
	{
		str = str / 16;
		i++;
	}
	if (i > 8)
	{	
		return (8);
	}
	return (i);
}

int	ft_hexa(uint64_t	str, char	c)
{

	char	*base;
	char	*base_maj;
	char	*new_str;
	int		i;

	base = "0123456789abcdef";
	base_maj = "0123456789ABCDEF";
	i = len(str);
	//printf("valeur de i : %d\n", i );
	new_str = malloc((i + 1) * sizeof(char));
	if (!new_str)
		return(0);
	new_str[i] = '\0';
	while (i > 0)
	{
		i--;
		if (c == 'x')
			new_str[i] = base[str % 16];
		if (c == 'X')
			new_str[i] = base_maj[str % 16];
		str = str / 16;
	}
	//printf("Valeur de new_str : %s\n" , new_str);
	// i = 0;
	while (new_str[i] != '\0')
	{
		write(1, &new_str[i], 1);
		i++;
	}
	free (new_str);
	return(i);
}