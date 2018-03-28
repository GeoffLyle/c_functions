/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:28:29 by alyle             #+#    #+#             */
/*   Updated: 2018/03/27 12:52:07 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"
#include "../includes/ft_opp.h"

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

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		s1++;
		s2++;
	}
	if (!s1[i] && !s2[i])
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		value;

	i = 0;
	sign = 1;
	value = 0;
	while ((str[i] == '\f' || str[i] == '\r' || str[i] == ' ' ||
			str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v') && str[i] != '\0')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		value = (value * 10 + (str[i] - '0'));
		i++;
	}
	return (value * sign);
}

void	ft_doop(int value1, char *oper, int value2)
{
	int		i;

	i = 0;
	while (!ft_strcmp(oper, g_opptab[i].oper) && i < 5)
	{
		i++;
	}
	if (i < 5)
	{
		if (value2 == 0 && i == 3)
			write(1, "Stop : division by zero\n", 24);
		else if (value2 == 0 && i == 4)
			write(1, "Stop : modulo by zero\n", 22);
		else
		{
			ft_putnbr((g_opptab[i].f)(value1, value2));
			ft_putchar('\n');
		}
	}
	else
		((g_opptab[i].f(value1, value2)));
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1)
			(g_opptab[5].f)(1, 1);
		else
		{
			ft_doop(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
		}
	}
	return (0);
}
