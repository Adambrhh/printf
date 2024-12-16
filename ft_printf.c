/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:03:54 by abarahho          #+#    #+#             */
/*   Updated: 2024/11/08 15:53:22 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prcssformat(char format, va_list args)
{
	if (format == 'c')
		return (print_c(va_arg(args, int)));
	else if (format == 's')
		return (print_s(va_arg(args, char *)));
	else if (format == 'p')
		return (print_p(va_arg(args, void *)));
	else if (format == 'd')
		return (print_nbr(va_arg(args, int)));
	else if (format == 'i')
		return (print_nbr(va_arg(args, int)));
	else if (format == 'u')
		return (print_u(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (print_xlow((va_arg(args, unsigned int))));
	else if (format == 'X')
		return (print_xup((va_arg(args, unsigned int))));
	else if (format == '%')
		return (print_c('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += ft_prcssformat(format[i], args);
		}
		else
		{
			print_c(format[i]);
			count++;
		}
		i++;
	}
	va_end (args);
	return (count);
}
