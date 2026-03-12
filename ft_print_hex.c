/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:45:43 by aravakia          #+#    #+#             */
/*   Updated: 2026/03/12 12:49:02 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

void	ft_put_hex(unsigned int n, char *base)
{
	char	c;

	if (n >= 16)
		ft_put_hex(n / 16, base);
	c = base[n % 16];
	ft_putchar_fd(c, 1);
}

int	ft_print_hex(va_list args)
{
	unsigned int	n;
	char			*base;

	n = va_arg(args, unsigned int);
	base = "0123456789abcdef";
	ft_put_hex(n, base);
	return (ft_hex_len(n));
}

int	ft_print_hex_upper(va_list args)
{
	unsigned int	n;
	char			*base;

	n = va_arg(args, unsigned int);
	base = "0123456789ABCDEF";
	ft_put_hex(n, base);
	return (ft_hex_len(n));
}
