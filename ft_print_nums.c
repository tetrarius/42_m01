/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:53:27 by aravakia          #+#    #+#             */
/*   Updated: 2026/03/12 11:38:13 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_unsigned_len(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_print_number(va_list args)
{
	int	n;

	n = va_arg(args, int);
	ft_putnbr_fd(n, 1);
	return (ft_num_len(n));
}

void	ft_put_unsigned(unsigned int n)
{
	char	c;

	if (n >= 10)
		ft_put_unsigned(n / 10);
	c = (n % 10) + '0';
	ft_putchar_fd(c, 1);
}

int	ft_print_unsigned_number(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_put_unsigned(n);
	return (ft_unsigned_len(n));
}
