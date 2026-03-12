/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:54:21 by aravakia          #+#    #+#             */
/*   Updated: 2026/03/12 13:11:09 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_check_format(va_list args, char c);
int		ft_print_char(va_list args);
int		ft_print_string(va_list args);
int		ft_print_pointer(va_list args);
int		ft_print_number(va_list args);
int		ft_print_unsigned_number(va_list args);
int		ft_print_hex(va_list args);
int		ft_print_hex_upper(va_list args);
int		ft_print_ss(va_list args);
int		ft_num_len(int n);
int		ft_unsigned_len(unsigned int n);
void	ft_put_unsigned(unsigned int n);
int		ft_hex_len(unsigned int n);
void	ft_put_hex(unsigned int n, char *base);
int		ft_ptr_len(unsigned long n);
void	ft_put_ptr(unsigned long n, char *base);

#endif
