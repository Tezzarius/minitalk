/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlloutput_backward.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:12:09 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/21 13:54:35 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dlloutput_backward(t_dll *head)
{
	t_dll	*curr;

	curr = head;
	while (curr != NULL)
	{
		ft_printf("%d\n", curr->content);
		curr = curr->prev;
	}
}
