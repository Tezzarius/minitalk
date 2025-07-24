/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlloutput_forward.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:10:07 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/21 13:55:12 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dlloutput_forward(t_dll *tail)
{
	t_dll	*curr;

	curr = tail;
	while (curr != NULL)
	{
		ft_printf("%d\n", curr->content);
		curr = curr->next;
	}
}
