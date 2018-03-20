/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 12:31:20 by alyle             #+#    #+#             */
/*   Updated: 2018/03/19 17:46:10 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_same(char *str, char *to_find, int i)
{
	int		j;

	j = 0;
	while (to_find[j] != '\0')
	{
		if (str[i] != to_find[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_same(str, to_find, i))
			return (str + i);
		i++;
	}
	return (0);
}
