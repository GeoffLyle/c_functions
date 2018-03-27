/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 17:09:56 by alyle             #+#    #+#             */
/*   Updated: 2018/03/26 21:11:01 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"

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

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
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
	while (ft_isspace(str[i]) && str[i] != '\0')
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

int		ft_doop(int value1, char oper, int value2)
{
	char	operators[6];
	int		(*ft_ptr[5])(int, int);
	int		i;

	i = 0;
	operators[0] = '+';
	operators[1] = '-';
	operators[2] = '*';
	operators[3] = '/';
	operators[4] = '%';
	operators[5] = '\0';
	ft_ptr[0] = &ft_add;
	ft_ptr[1] = &ft_subtract;
	ft_ptr[2] = &ft_multiply;
	ft_ptr[3] = &ft_divide;
	ft_ptr[4] = &ft_modulo;
	while (oper != operators[i] && operators[i])
	{
		i++;
	}
	if (i < 5)
		return ((*ft_ptr[i])(value1, value2));
	return (0);
}

int		main(int argc, char **argv)
{
	int		val1;
	int		val2;

	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1)
			write(1, "0\n", 2);
		else
		{
			val1 = ft_atoi(argv[1]);
			val2 = ft_atoi(argv[3]);
			if (val2 == 0 && argv[2][0] == '/')
				write(1, "Stop : division by zero\n", 24);
			else if (val2 == 0 && argv[2][0] == '%')
				write(1, "Stop : modulo by zero\n", 22);
			else
			{
				ft_putnbr(ft_doop(val1, argv[2][0], val2));
				ft_putchar('\n');
			}
		}
	}
	return (0);
}
