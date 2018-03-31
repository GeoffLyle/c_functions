/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:38:05 by alyle             #+#    #+#             */
/*   Updated: 2018/03/30 16:51:51 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	if (!root)
		return (-1);
	else
	{
		if (btree_level_count(root->left) > btree_level_count(root->right))
			return (btree_level_count(root->left) + 1);
		else
			return (btree_level_count(root->right) + 1);
	}
}
