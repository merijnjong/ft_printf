/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:52:07 by mjong             #+#    #+#             */
/*   Updated: 2023/11/07 17:44:22 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_printf(const char *s, ...)
{
	int		chars;
	int		i;
	va_list	args;

	chars = 0;
	i = 0;
	if (!s)
		return (-1);
	va_start(args, s);
	while (s[i] != '\0')
	{
		while (s[i] != '%')
			write(1, &s[i], 1);
		if (s[i] == '%')
			i++;
		if (s[i] == 'c')
			ft_putchar(va_arg(args, int));
		if (s[i] == 's')
			ft_putstr(va_arg(args, char *));
		if (s[i] == 'd')
			ft_putnbr(va_arg(args, int));
		i++;
	}
	va_end(args);
	return (chars);
}

int	main(void)
{
	ft_printf("hello world %d\n", 108982);
	printf("hello world %d", 108982);
	return (0);
}
