/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:52:07 by mjong             #+#    #+#             */
/*   Updated: 2023/11/08 18:05:55 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_printf2(char specifier, va_list args)
{
	if (specifier == 'c')
		ft_printc(va_arg(args, int));
	else if (specifier == 's')
		ft_prints(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		ft_printd(va_arg(args, int));
	else if (specifier == 'x')
		ft_printx_lo(va_arg(args, unsigned int));
	else if (specifier == 'X')
		ft_printx_up(va_arg(args, unsigned int));
	else if (specifier == 'u')
		ft_printu(va_arg(args, unsigned int));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		chars;
	va_list	args;

	chars = 0;
	if (!s)
		return (-1);
	va_start(args, s);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			ft_printf2(*s, args);
		}
		else
			write(1, s, 1);
		s++;
	}
	va_end(args);
	return (chars);
}

int	main(void)
{
	// ft_printf("Hello, %s the time is %d. Don't you like the letter %c?\n", "John", 1230, 'c');
	ft_printf("Hello, %u\n", -50);
	printf("Hello, %u", -50);
	return (0);
}