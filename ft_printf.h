/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:51:57 by mjong             #+#    #+#             */
/*   Updated: 2023/11/14 14:21:08 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *s, ...);

int	ft_printc(char c);
int	ft_printd(int n);
int	ft_printp(void *p);
int	ft_printp2(void *p);
int	ft_prints(char *s);
int	ft_printu(unsigned int n);
int	ft_printx_lo(long n);
int	ft_printx_up(long n);

#endif