/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:19:46 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/21 13:46:51 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dllreverse(t_dll **tail, t_dll **head)
{
	t_dll	*curr;
	t_dll	*tmp;
	t_dll	*next;

	curr = *tail;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = curr->prev;
		curr->prev = next;
		curr = next;
	}
	tmp = *tail;
	*tail = *head;
	*head = tmp;
}
