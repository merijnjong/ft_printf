/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:51:57 by mjong             #+#    #+#             */
/*   Updated: 2023/11/09 16:54:20 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_printc(char c);
int	ft_prints(char *s);
int	ft_printd(int n);
int	ft_printx_lo(long n);
int	ft_printx_up(long n);
int	ft_printu(unsigned int n);
int	ft_printp(void *p);
int	ft_printp2(void *p);

#endif