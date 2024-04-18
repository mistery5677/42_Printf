/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_protect.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:15:49 by miafonso          #+#    #+#             */
/*   Updated: 2024/04/18 17:17:24 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	protect(const char *format)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			count++;
			i++;
			if (format[i] == '%' || format[i] == 's' || format[i] == 'c'
				|| format[i] == 'd' || format[i] == 'i' || format[i] == 'u'
				|| format[i] == 'x' || format[i] == 'X' || format[i] == 'p')
			{
				count++;
			}
		}
	}
	return (count);
}
