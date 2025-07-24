/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlladd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:04:14 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/21 13:45:36 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dlladd_end(t_dll **head, int value)
{
	t_dll	*new_node;

	new_node = malloc(sizeof(t_dll));
	if (new_node == NULL)
		return (exit(3));
	new_node->content = value;
	new_node->prev = *head;
	new_node->next = NULL;
	(*head)->next = new_node;
	*head = new_node;
}
