/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllfind_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:18:02 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/21 13:46:14 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_dll	*ft_dllfind_node(t_dll *tail, int value)
{
	t_dll	*curr;

	curr = tail;
	while (curr != NULL)
	{
		if (curr->content == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}
