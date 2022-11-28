/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:10:50 by kmachaka          #+#    #+#             */
/*   Updated: 2022/11/28 17:03:59 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <signal.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_printf_char(char c);
int		ft_printf_str(char *str);
int		ft_printf_number(int num);
int		ft_printf_hex(size_t num, char *base);
int		ft_puthex(unsigned int num, char *base);
int		ft_type(const char c, va_list args);
int		ft_printf_ptr(void *ptr);
int		ft_printf_u(unsigned int num);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);

void	ft_putchar(char c);
void	handler(int num);
int		ft_atoi(const char *str);
void	send_char(char c, int pid);

#endif
