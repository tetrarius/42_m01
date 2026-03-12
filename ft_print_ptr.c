/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:51:12 by aravakia          #+#    #+#             */
/*   Updated: 2026/03/12 13:07:43 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long n)
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

void	ft_put_ptr(unsigned long n, char *base)
{
	char	c;

	if (n >= 16)
		ft_put_ptr(n / 16, base);
	c = base[n % 16];
	ft_putchar_fd(c, 1);
}

int	ft_print_pointer(va_list args)
{
	unsigned long	n;
	char			*base;

	n = va_arg(args, unsigned long);
	base = "0123456789abcdef";
	if (!n)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	ft_put_ptr(n, base);
	return (ft_ptr_len(n) + 2);
}
