/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:56:31 by alyle             #+#    #+#             */
/*   Updated: 2018/03/21 21:35:26 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	if (strlen)
	{
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

int				ft_output_base(char *convert, char *base, int nbr, int i)
{
	int		baselen;
	int		sign;

	sign = 1;
	if (nbr < 0)
		sign = -1;
	baselen = ft_strlen(base);
	if (nbr / baselen == 0)
	{
		convert[i] = base[(nbr % baselen) * sign];
		return (i + 1);
	}
	else
	{
		i = ft_output_base(convert, base, nbr / baselen, i);
		convert[i] = base[(nbr % baselen) * sign];
		return (i + 1);
	}
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*convert;
	int		decimal_value;
	int		i;

	i = 0;
	convert = (char*)malloc(sizeof(*convert) * 12);
	decimal_value = ft_atoi_base(nbr, base_from);
	if (decimal_value < 0)
	{
		convert[i] = '-';
		i++;
	}
	i = ft_output_base(convert, base_to, decimal_value, i);
	convert[i] = '\0';
	return (convert);
}
