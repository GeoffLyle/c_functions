/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 16:16:23 by alyle             #+#    #+#             */
/*   Updated: 2018/03/19 16:55:19 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		word;

	i = 0;
	word = 1;
	while (str[i] != '\0')
	{
		if (ft_isalphanum(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && word)
				str[i] = str[i] - 32;
			else if (str[i] >= 'A' && str[i] <= 'Z' && word == 0)
				str[i] = str[i] + 32;
			word = 0;
		}
		else
			word = 1;
		i++;
	}
	return (str);
}
