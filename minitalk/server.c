/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:09:17 by kmachaka          #+#    #+#             */
/*   Updated: 2022/11/28 19:31:07 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	handler(int sig_num)
{
	static int	location;
	static int	byte;

	if (sig_num == SIGUSR1)
		byte += 1 << (7 - location);
	location++;
	if (location == 8)
	{
		ft_putchar(byte);
		location = 0;
		byte = 0;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	(void)argv;
	if (argc == 1)
	{
		pid = getpid();
		ft_printf("PID: %d\n----------\nMSG:\n", pid);
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		while (1)
			pause();
	}
	ft_putchar('\n');
	if (argc != 1)
		printf("Error! Did you mean: ./server?\n");
	return (0);
}
