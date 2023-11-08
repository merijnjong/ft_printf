/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:51:57 by mjong             #+#    #+#             */
/*   Updated: 2023/11/08 17:31:50 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_printc(char c);
char	*ft_prints(char *s);
int		ft_strlen(char *s);
void	ft_printd(int n);
void	ft_printx_lo(long n);
void	ft_printx_up(long n);

#endif