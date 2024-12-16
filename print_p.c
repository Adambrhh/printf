/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:22:43 by abarahho          #+#    #+#             */
/*   Updated: 2024/11/19 14:36:35 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(unsigned long n)
{
	static int	count;

	count = 0;
	if (n >= 16)
		print_x(n / 16);
	print_c("0123456789abcdef"[n % 16]);
	count++;
	return (count);
}

int	print_p(void *ptr)
{
	int		res;
	long	address;

	res = 0;
	address = (long)ptr;
	if (ptr == NULL)
		return (print_s("(nil)"));
	res += print_s("0x");
	res += print_x(address);
	return (res);
}
