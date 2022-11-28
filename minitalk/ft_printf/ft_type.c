/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:06:00 by kmachaka          #+#    #+#             */
/*   Updated: 2022/08/12 14:29:40 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(const char c, va_list args)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(args, int)));
	if (c == 's')
		return (ft_printf_str(va_arg(args, char *)));
	if (c == 'p')
		return (ft_printf_ptr(va_arg(args, void *)));
	if (c == 'd' || c == 'i')
		return (ft_printf_number(va_arg(args, int)));
	if (c == 'u')
		return (ft_printf_u(va_arg(args, int)));
	if (c == 'x')
		return (ft_puthex(va_arg(args, int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_puthex(va_arg(args, int), "0123456789ABCDEF"));
	if (c == '%')
		return (ft_printf_char('%'));
	else
		return (0);
}
