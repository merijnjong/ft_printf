/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunctions1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:11:15 by mjong             #+#    #+#             */
/*   Updated: 2023/11/09 14:27:58 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printc(char c)
{
	return (write(1, &c, 1));
}

int	ft_prints(char *s)
{
	int	chars;

	chars = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s != '\0')
	{
		chars += ft_printc(*s);
		s++;
	}
	return (chars);
}

int	ft_printd(int n)
{
	int	chars;

	chars = 0;
	if (n == -2147483648)
	{
		chars += ft_prints("-2147483648");
		return (chars);
	}
	if (n < 0)
	{
		chars += ft_printc('-');
		n = -n;
	}
	if (n >= 10)
	{
		chars += ft_printd(n / 10);
	}
	chars += ft_printc('0' + n % 10);
	return (chars);
}
