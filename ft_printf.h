/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:01:30 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/20 14:50:31 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar_mod(char	c);
int	ft_putstr_mod(char	*str);
int	ft_strlen_mod(char	*str);
int	ft_putnbr_mod(int n);
int ft_printf(const char	*str, ...);

#endif