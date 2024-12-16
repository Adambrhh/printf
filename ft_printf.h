/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:04:16 by abarahho          #+#    #+#             */
/*   Updated: 2024/11/06 16:58:42 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		print_c(char c);
int		print_nbr(int n);
int		print_u(unsigned int n);
int		print_p(void *ptr);
int		print_s(char *str);
int		print_xlow(unsigned int n);
int		print_xup(unsigned int n);

#endif