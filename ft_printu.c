/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:59:20 by mjong             #+#    #+#             */
/*   Updated: 2023/11/09 16:59:22 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
