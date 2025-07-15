/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:37:56 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/15 12:43:15 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	manage_signal(int sig)
{
	static unsigned char	c = 0;
	static int				count = 0;

	c <<= 1;
	if (sig == SIGUSR1)
		c |= 1;
	count++;
	if (count == 8)
	{
		if (c == '\0')
			write(1, "\n", 1);
		else
			write(1, &c, 1);
		c = 0;
		count = 0;
	}
}

int	main(void)
{
	pid_t	pid;
	
	pid = getpid();
	ft_printf("Server PID: %d\n", pid);

	signal(SIGUSR1, manage_signal);
	signal(SIGUSR2, manage_signal);

	while (1)
		pause();
}