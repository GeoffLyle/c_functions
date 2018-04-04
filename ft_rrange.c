/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:20:53 by alyle             #+#    #+#             */
/*   Updated: 2018/04/03 17:57:12 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*array;
	int		range;
	int		inc;
	int		i;

	i = 0;
	range = (end <= start) ? start - end + 1 : end - start + 1;
	array = (int*)malloc(sizeof(int) * (range));
	while (i < range)
	{
		array[i] = start;
		(end >= start) ? start++ : start--;
		i++;
	}
	return (array);
}
