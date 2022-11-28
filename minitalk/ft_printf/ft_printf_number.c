/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:19:28 by kmachaka          #+#    #+#             */
/*   Updated: 2022/08/03 17:49:27 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_number(int num)
{
	unsigned int	n;
	int				count;

	count = 0;
	if (num < 0)
	{
		count += ft_printf_char('-');
		n = (unsigned int)(num * -1);
	}
	else
		n = (unsigned int)num;
	if (n >= 10)
		count += ft_printf_number(n / 10);
	count += ft_printf_char(n % 10 + '0');
	return (count);
}
