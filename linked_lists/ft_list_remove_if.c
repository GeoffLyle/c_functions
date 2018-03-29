/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:42:12 by alyle             #+#    #+#             */
/*   Updated: 2018/03/28 15:52:47 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp()))
{
	t_list	*prev_elem;
	t_list	*tmp;

	while (*begin_list && !cmp((*begin_list)->data, data_ref))
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	prev_elem = *begin_list;
	while (prev_elem && prev_elem->next)
	{
		if (!cmp(prev_elem->next->data, data_ref))
		{
			tmp = prev_elem->next;
			prev_elem->next = tmp->next;
			free(tmp);
		}
		else
			prev_elem = prev_elem->next;
	}
}
