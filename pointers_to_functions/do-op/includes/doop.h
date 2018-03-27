/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:21:55 by alyle             #+#    #+#             */
/*   Updated: 2018/03/26 22:21:57 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_divide(int a, int b);
int		ft_multiply(int a, int b);
int		ft_add(int a, int b);
int		ft_subtract(int a, int b);
int		ft_modulo(int a, int b);
int		ft_isspace(char c);
int		ft_atoi(char *str);
int		ft_doop(int value1, char oper, int value2);
int		ft_strlen(char *str);
#endif
