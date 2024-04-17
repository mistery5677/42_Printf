/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:24:13 by miafonso          #+#    #+#             */
/*   Updated: 2024/04/17 11:24:13 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		len += ft_print_hex(va_arg(args, unsigned int), 'a');
	else if (format == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), 'A');
	else if (format == 'p')
		len += ft_print_add(va_arg(args, long long));
	else if (format == 's')
		len += ft_printstr(va_arg(args, const char *));
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		len;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	len = 0;
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			len += ft_conversion(args, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
	}
	va_end(args);
	return (len);
}