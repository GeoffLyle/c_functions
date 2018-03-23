/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:57:49 by alyle             #+#    #+#             */
/*   Updated: 2018/03/20 18:56:59 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_str_char(char *str, char to_find, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
			return (1);
		i++;
	}
	return (0);
}

int		ft_valid_base(char *str)
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

void	ft_output_base(int nbr, char *base, int baselen, int sign)
{
	if (nbr / baselen == 0)
		ft_putchar(base[(nbr % baselen) * sign]);
	else
	{
		ft_output_base(nbr / baselen, base, baselen, sign);
		ft_putchar(base[(nbr % baselen) * sign]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselen;
	int		sign;

	baselen = 0;
	sign = 1;
	if (ft_valid_base(base))
	{
		while (base[baselen])
			baselen++;
		if (nbr < 0)
		{
			ft_putchar('-');
			sign = -1;
		}
		ft_output_base(nbr, base, baselen, sign);
	}
}
