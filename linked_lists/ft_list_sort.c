/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:44:45 by alyle             #+#    #+#             */
/*   Updated: 2018/03/28 19:35:55 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		count;

	count = 0;
	if (begin_list)
	{
		count++;
		while (begin_list->next)
		{
			count++;
			begin_list = begin_list->next;
		}
	}
	return (count);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		i;
	t_list	*next_data;
	t_list	*tmp;

	i = ft_list_size(*begin_list);
	while (i > 1)
	{
		tmp = *begin_list;
		while (tmp->next)
		{
			if (cmp(tmp->data, tmp->next->data) > 0)
			{
				next_data = tmp->next->data;
				tmp->next->data = tmp->data;
				tmp->data = next_data;
			}
			tmp = tmp->next;
		}
		i--;
	}
}
