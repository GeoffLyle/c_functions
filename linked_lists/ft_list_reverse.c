/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:55:13 by alyle             #+#    #+#             */
/*   Updated: 2018/03/27 20:30:00 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*next_elem;

	next_elem = NULL;
	prev = NULL;
	if (*begin_list)
	{
		while ((*begin_list)->next)
		{
			next_elem = (*begin_list)->next;
			(*begin_list)->next = prev;
			prev = *begin_list;
			*begin_list = next_elem;
		}
		(*begin_list)->next = prev;
	}
}
