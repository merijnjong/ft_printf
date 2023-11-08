/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunctions2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:26:53 by mjong             #+#    #+#             */
/*   Updated: 2023/11/08 18:14:11 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_printx_lo(long n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n == 0)
	{
		ft_printc('0');
		return ;
	}
	if (n / 16 > 0)
	{
		ft_printx_lo(n / 16);
	}
	ft_printc(hex[n % 16]);
}

void	ft_printx_up(long n)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_printc('0');
		return ;
	}
	if (n / 16 > 0)
	{
		ft_printx_up(n / 16);
	}
	ft_printc(hex[n % 16]);
}

int	ft_printu(unsigned int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n >= 10)
	{
		ft_printd(n / 10);
	}
	ft_printc('0' + n % 10);
	return (0);
}

void	ft_printp(void *p)
{
	
}
