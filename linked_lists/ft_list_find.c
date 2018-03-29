/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:29:28 by alyle             #+#    #+#             */
/*   Updated: 2018/03/28 12:36:10 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list)
	{
		while (begin_list->next)
		{
			if (!cmp(begin_list->data, data_ref))
				return (begin_list);
			begin_list = begin_list->next;
		}
		if (!cmp(begin_list->data, data_ref))
			return (begin_list);
	}
	return (NULL);
}
