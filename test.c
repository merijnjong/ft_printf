/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:44:11 by mjong             #+#    #+#             */
/*   Updated: 2023/11/07 17:44:14 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		print_char((int)*str);
		count++;
		str++;
	}
	return (count);
}

int	print_digit(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
		return (print_char(symbols[n]));
	else
	{
		count = print_digit(n / base, base);
		return (count + print_digit(n % base, base));
	}
}

int	print_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char *));
	else if (specifier == 'd')
		count += print_digit((long)(va_arg(args, int)), 10);
	else if (specifier == 'x')
		count += print_digit((long)(va_arg(args, unsigned int)), 16);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	va_start(args, s);
	count = 0;
	while (*s != '\0')
	{
		if (*s == '%')
			count += print_format(*(s++), args);
		else
			count += write(1, s, 1);
		s++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	ft_printf("hello world %d\n", 108982);
	printf("hello world %d", 108982);
	return (0);
}
