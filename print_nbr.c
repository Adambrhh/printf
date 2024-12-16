/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:22:38 by abarahho          #+#    #+#             */
/*   Updated: 2024/11/05 12:48:03 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	print_nbr(int n)
{
	unsigned int	i;

	i = n;
	if (n < 0)
	{
		print_c('-');
		i = -n;
	}
	if (i >= 10)
		print_nbr(i / 10);
	print_c((i % 10) + '0');
	return (ft_nbrlen(n));
}
