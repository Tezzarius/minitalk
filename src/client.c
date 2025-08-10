/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:38:09 by bschwarz          #+#    #+#             */
/*   Updated: 2025/08/10 12:21:06 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_bits(pid_t pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(200);
		i--;
	}
}

static void	send_string(pid_t pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		send_bits(pid, str[i]);
		i++;
	}
	send_bits(pid, '\0');
}

int	main(int argc, char **argv)
{
	pid_t	server_pid;

	if (argc != 3)
		return (1);
	server_pid = ft_atoi(argv[1]);
	if (server_pid < 1)
		return (1);
	send_string(server_pid, argv[2]);
	return (0);
}
