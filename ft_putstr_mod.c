/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:51:01 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/22 11:45:38 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_mod(char	*str)
{
	int	i;

	i = 0;
	/*if (str == '\0')
		return (1);*/
	while (str[i])
	{
		write(1, &str[i] , 1);
		i++;
	}
	return(ft_strlen_mod(str));
}