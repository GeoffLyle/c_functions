/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:22:39 by alyle             #+#    #+#             */
/*   Updated: 2018/03/27 20:05:58 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list)
	{
		while (begin_list->next && nbr > 0)
		{
			begin_list = begin_list->next;
			nbr--;
		}
		if (nbr == 0)
			return (begin_list);
	}
	return (0);
}
