/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:27:09 by kmachaka          #+#    #+#             */
/*   Updated: 2022/11/16 15:31:57 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <stdlib.h>
# include "ft_printf.h"

void	ft_putchar(char c);
void	handler(int num);
int		ft_atoi(const char *str);
void	send_char(char c, int pid);

#endif
