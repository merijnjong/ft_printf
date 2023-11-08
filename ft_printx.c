/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:26:53 by mjong             #+#    #+#             */
/*   Updated: 2023/11/08 17:31:26 by mjong            ###   ########.fr       */
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
