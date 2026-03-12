/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:53:12 by aravakia          #+#    #+#             */
/*   Updated: 2026/03/12 12:47:17 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = count + ft_print_char(args);
	else if (c == 's')
		count = count + ft_print_string(args);
	else if (c == 'p')
		count = count + ft_print_pointer(args);
	else if (c == 'd' || c == 'i')
		count = count + ft_print_number(args);
	else if (c == 'u')
		count = count + ft_print_unsigned_number(args);
	else if (c == 'x')
		count = count + ft_print_hex(args);
	else if (c == 'X')
		count = count + ft_print_hex_upper(args);
	else if (c == '%')
		count = count + ft_print_ss(args);
	return (count);
}
