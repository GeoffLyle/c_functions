/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:11:54 by alyle             #+#    #+#             */
/*   Updated: 2018/03/26 16:58:58 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		is_desc;

	i = 0;
	while (!f(tab[i], tab[i + 1]) && i < length - 1)
		i++;
	if (f(tab[i], tab[i + 1]) > 0)
		is_desc = 1;
	else if (f(tab[i], tab[i + 1] < 0))
		is_desc = 0;
	i++;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0 && is_desc)
			return (0);
		else if (f(tab[i], tab[i + 1]) > 0 && !is_desc)
			return (0);
		i++;
	}
	return (1);
}
