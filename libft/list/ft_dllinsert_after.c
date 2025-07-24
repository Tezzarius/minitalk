/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllinsert_after.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:16:01 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/21 13:46:30 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dllinsert_after(t_dll *node, int value)
{
	t_dll	*new_node;

	new_node = malloc(sizeof(t_dll));
	if (new_node == NULL)
		return (exit(4));
	new_node->content = value;
	new_node->prev = node;
	new_node->next = node->next;
	if (node->next != NULL)
		node->next->prev = new_node;
	node->next = new_node;
}
