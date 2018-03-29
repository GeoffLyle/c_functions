/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:05:03 by alyle             #+#    #+#             */
/*   Updated: 2018/03/28 12:24:04 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	if (begin_list)
	{
		while (begin_list->next)
		{
			if (!cmp(begin_list->data, data_ref))
				f(begin_list->data);
			begin_list = begin_list->next;
		}
		if (!cmp(begin_list->data, data_ref))
			f(begin_list->data);
	}
}
