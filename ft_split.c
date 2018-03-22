/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 11:25:57 by alyle             #+#    #+#             */
/*   Updated: 2018/03/22 11:53:14 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_in_charset(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_copy_word(char *dest, char *src, char *charset, int j)
{
	int		i;

	i = 0;
	while (src[j] != '\0' && !(ft_in_charset(src[j], charset)))
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

char	**ft_split(char *str, char *charset)
{
	char	**strarray;
	int		word;
	int		j;
	int		strlen;

	strlen = ft_strlen(str);
	strarray = malloc(((strlen / 2) + 1) * sizeof(char*));
	word = 0;
	j = 0;
	while (str[j])
	{
		if (ft_in_charset(str[j], charset))
			j++;
		else
		{
			strarray[word] = (char*)malloc(sizeof(char*) * (strlen - j));
			j = ft_copy_word(strarray[word], str, charset, j);
			word++;
		}
	}
	strarray[word] = 0;
	return (strarray);
}
