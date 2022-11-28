/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:53:28 by kmachaka          #+#    #+#             */
/*   Updated: 2022/08/03 17:54:21 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_printf_number(num / 10);
	count += ft_printf_char(num % 10 + '0');
	return (count);
}
