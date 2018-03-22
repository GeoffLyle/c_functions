/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 13:20:39 by alyle             #+#    #+#             */
/*   Updated: 2018/03/21 14:17:41 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	i = 0;
	if (min >= max)
	{
		*range = ((void *)0);
		return (i);
	}
	*range = (int*)malloc(sizeof(**range) * (max - min));
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
