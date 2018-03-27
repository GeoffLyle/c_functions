/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 15:42:34 by alyle             #+#    #+#             */
/*   Updated: 2018/03/26 20:51:48 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_copy_word(char *dest, char *src, int j)
{
	int		i;

	i = 0;
	while (src[j] != '\0' && src[j] != ' ' && src[j] != '\n' && src[j] != '\t')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (j);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**strarray;
	int		word;
	int		j;
	int		strlen;

	strlen = ft_strlen(str);
	strarray = malloc(sizeof(char*) * ((strlen / 2) + 2));
	word = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')
			j++;
		else
		{
			strarray[word] = (char*)malloc(sizeof(char*) * (strlen - j));
			j = ft_copy_word(strarray[word], str, j);
			word++;
		}
	}
	strarray[word] = 0;
	return (strarray);
}
