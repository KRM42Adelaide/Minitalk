/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:34:01 by kmachaka          #+#    #+#             */
/*   Updated: 2022/08/12 17:18:32 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(size_t num, char *base)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_printf_hex(num / 16, base);
	count += ft_printf_char(base[num % 16]);
	return (count);
}

int	ft_puthex(unsigned int num, char *base)
{
	return (ft_printf_hex(num, base));
}
