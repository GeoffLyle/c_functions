/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:21:55 by alyle             #+#    #+#             */
/*   Updated: 2018/03/27 12:41:19 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

typedef struct	s_opp
{
	char	*oper;
	int		(*f)(int, int);
}				t_opp;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_div(int a, int b);
int				ft_mul(int a, int b);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);
int				ft_isspace(char c);
int				ft_atoi(char *str);
void			ft_doop(int value1, char *oper, int value2);
int				ft_strlen(char *str);

#endif
