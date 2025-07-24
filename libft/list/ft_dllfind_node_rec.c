/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllfind_node_rec.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:18:57 by bschwarz          #+#    #+#             */
/*   Updated: 2025/07/21 13:54:13 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_dll	*ft_dllfind_node_rec(t_dll *node, int value)
{
	if (node == NULL)
		return (NULL);
	if (node->content == value)
		return (node);
	return (ft_dllfind_node_rec(node->next, value));
}
