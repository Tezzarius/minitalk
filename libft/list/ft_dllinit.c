/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:14:41 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/21 13:46:21 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dllinit(t_dll **tail, t_dll **head, int value)
{
	t_dll	*new_node;

	new_node = malloc(sizeof(t_dll));
	if (new_node == NULL)
		return (exit(1));
	new_node->content = value;
	new_node->prev = NULL;
	new_node->next = NULL;
	*tail = new_node;
	*head = new_node;
}
