/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:50:28 by alyle             #+#    #+#             */
/*   Updated: 2018/03/27 17:57:27 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;

	if (*begin_list)
	{
		list = *begin_list;
		if (list->next)
		{
			list = list->next;
			ft_list_clear(&list);
		}
		free(list);
	}
	*begin_list = NULL;
}
