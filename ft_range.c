/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 12:17:05 by alyle             #+#    #+#             */
/*   Updated: 2018/03/21 12:29:56 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*int_array;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	int_array = (int*)malloc(sizeof(*int_array) * (max - min));
	while (min < max)
	{
		int_array[i] = min;
		min++;
		i++;
	}
	return (int_array);
}
