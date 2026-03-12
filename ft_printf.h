/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:54:21 by aravakia          #+#    #+#             */
/*   Updated: 2026/03/11 10:40:01 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_check_format(va_list f, char c);
int	ft_print_char(va_list f);
int	ft_print_string(va_list f);
int	ft_print_pointer(va_list f);
int	ft_print_number(va_list f);
int	ft_print_unsigned_number(va_list f);
int	ft_print_hex(va_list f);
int	ft_print_HEX(va_list f);
int	ft_print_ss(va_list f);

#endif
