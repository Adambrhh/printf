/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xlow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:22:51 by abarahho          #+#    #+#             */
/*   Updated: 2024/11/07 10:54:25 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_xlow(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_xlow(n / 16);
	print_c("0123456789abcdef"[n % 16]);
	count++;
	return (count);
}
