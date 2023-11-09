/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunctions2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:26:53 by mjong             #+#    #+#             */
/*   Updated: 2023/11/09 14:35:36 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printx_lo(long n)
{
	char	*hex;
	int		chars;

	hex = "0123456789abcdef";
	chars = 0;
	if (n / 16 > 0)
	{
		chars += ft_printx_lo(n / 16);
	}
	chars += ft_printc(hex[n % 16]);
	return (chars);
}

int	ft_printx_up(long n)
{
	char	*hex;
	int		chars;

	hex = "0123456789ABCDEF";
	chars = 0;
	if (n / 16 > 0)
	{
		chars += ft_printx_up(n / 16);
	}
	chars += ft_printc(hex[n % 16]);
	return (chars);
}

int	ft_printu(unsigned int n)
{
	int	chars;

	chars = 0;
	if (n >= 10)
	{
		chars += ft_printd(n / 10);
	}
	chars += ft_printc('0' + n % 10);
	return (chars);
}

int	ft_printp(void *p)
{
	int	chars;

	chars = 0;
}
