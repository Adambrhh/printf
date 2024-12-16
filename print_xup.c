/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:22:54 by abarahho          #+#    #+#             */
/*   Updated: 2024/11/06 09:53:06 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_xup(unsigned int n)
{
	static int	count;

	count = 0;
	if (n >= 16)
		print_xup(n / 16);
	print_c("0123456789ABCDEF"[n % 16]);
	count++;
	return (count);
}
