/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:18:58 by alyle             #+#    #+#             */
/*   Updated: 2018/03/30 16:12:20 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (!btree_search_item(root->left, data_ref, cmpf))
		{
			if (!cmpf(root->item, data_ref))
				return (root->item);
			else
				return (btree_search_item(root->right, data_ref, cmpf));
		}
		return (btree_search_item(root->left, data_ref, cmpf));
	}
	return (NULL);
}
