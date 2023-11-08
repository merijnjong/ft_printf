/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunctions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:11:15 by mjong             #+#    #+#             */
/*   Updated: 2023/11/08 16:09:20 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_printc(char c)
{
	write(1, &c, 1);
}

char	*ft_prints(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_printd(int n)
{
	if (n == -2147483648)
	{
		ft_prints("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_printc('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_printd(n / 10);
	}
	ft_printc('0' + n % 10);
}
