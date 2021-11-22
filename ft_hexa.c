/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:51:02 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/22 16:27:46 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>


int	len(uint64_t	str)
{
	int i;

	i = 0;
	if (str == 0)
		return(1);	
	while (str != 0)
	{
		str = str / 16;
		i++;
	}
	if (i > 8)
		return (8);
	return (i);
}

int	ft_hexa(uint64_t	str)
{

	char	*base;
	char	*new_str;
	int		i;

	base = "0123456789abcdef";
	i = len(str);
	printf("valeur de i : %d\n", i );
	new_str = malloc((i + 1) * sizeof(char));
	new_str[i] = '\0';
	while (i > 0)
	{
		i--;
		new_str[i] = base[str % 16];
		//printf("valeur de new_str[%d] %c\n", i , new_str[i]);
		str = str / 16;
	}
	//printf("Valeur de new_str : %s\n" , new_str);
	i = 0;
	while (new_str[i] != '\0')
	{
		write(1, &new_str[i], 1);
		i++;
	}
	return(i);
}