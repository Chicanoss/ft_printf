/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:01:30 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/23 18:39:02 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>


int	ft_putchar_mod(char	c);
int	ft_putstr_mod(char	*str);
int	ft_strlen_mod(char	*str);
int	ft_putnbr_mod(int n);
int ft_printf(const char	*str, ...);
int	ft_hexa(uint64_t	str, char	c);
int	ft_printu(unsigned int n);
int	ft_printp(unsigned long long nb);

#endif