/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:37:00 by alyle             #+#    #+#             */
/*   Updated: 2018/03/21 20:42:11 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int				ft_str_char(char *str, char to_find, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
			return (1);
		i++;
	}
	return (0);
}

int				ft_valid_base(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || ft_str_char(str, str[i], i + 1))
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int				ft_get_number(char *str, char *base, int value)
{
	int		baselen;
	int		position;
	int		strlen;
	int		multiplier;

	baselen = ft_strlen(base);
	while (*str)
	{
		position = 0;
		strlen = ft_strlen(str);
		multiplier = 1;
		while (base[position] != '\0' && base[position] != *str)
			position++;
		if (base[position] == '\0')
			return (0);
		while (strlen > 1)
		{
			multiplier *= baselen;
			strlen--;
		}
		value = value + (position * multiplier);
		str++;
	}
	return (value);
}

int				ft_atoi_base(char *str, char *base)
{
	int		value;
	int		sign;
	int		strlen;

	value = 0;
	sign = 1;
	strlen = ft_strlen(str);
	if (strlen && ft_valid_base(base))
	{
		while (*str == '\t' || *str == '\n' || *str == '\v' ||
				*str == '\f' || *str == '\r' || *str == ' ')
			str++;
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = -1;
			str++;
		}
		value = ft_get_number(str, base, value);
	}
	return (value * sign);
}
