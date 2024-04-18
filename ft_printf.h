/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:19:07 by miafonso          #+#    #+#             */
/*   Updated: 2024/04/18 17:19:07 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_print_add(unsigned long long nbr);
size_t	ft_printstr(const char *str);
size_t	ft_printnbr(int nbr);
size_t	ft_print_unsigned(unsigned int nbr);
size_t	ft_print_hex(unsigned int num, int format);

#endif