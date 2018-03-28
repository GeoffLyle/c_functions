/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:47:22 by alyle             #+#    #+#             */
/*   Updated: 2018/03/27 16:41:25 by alyle            ###   ########.fr       */
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
