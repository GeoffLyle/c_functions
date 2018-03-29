/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:38:26 by alyle             #+#    #+#             */
/*   Updated: 2018/03/28 11:48:11 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list)
	{
		while (begin_list->next)
		{
			f(begin_list->data);
			begin_list = begin_list->next;
		}
		f(begin_list->data);
	}
}
