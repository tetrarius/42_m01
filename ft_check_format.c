/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:53:12 by aravakia          #+#    #+#             */
/*   Updated: 2026/03/11 10:43:42 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list f, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = count + ft_print_char(f);
	else if (c == 's')
		count = count + ft_print_string(f);
	else if (c == 'p')
		count = count + ft_print_pointer(f);
	else if (c == 'd' || c == 'i')
		count = count + ft_print_number(f);
	else if (c == 'u')
		count = count + ft_print_unsigned_number(f);
	else if (c == 'x')
		count = count + ft_print_hex(f);
	else if (c == 'X')
		count = count + ft_print_HEX(f);
	else if (c == '%')
		count = count + ft_print_ss(f);
	return (count);
}
