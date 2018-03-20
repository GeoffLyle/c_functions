/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 16:17:55 by alyle             #+#    #+#             */
/*   Updated: 2018/03/17 00:07:21 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	hold;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		hold = str[len];
		str[len] = str[i];
		str[i] = hold;
		i++;
		len--;
	}
	return (str);
}
