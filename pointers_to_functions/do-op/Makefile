# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alyle <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 22:21:20 by alyle             #+#    #+#              #
#    Updated: 2018/03/26 23:50:33 by alyle            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

LIBNAME = libft.a

SRC = ./srcs/ft_doop.c ./srcs/ft_operators.c ./srcs/ft_putnbr.c

OBJ = ft_doop.o ft_operators.o ft_putnbr.o

HEADER = ./includes/

GCCFLAGS = -Wall -Wextra -Werror

all: $(LIBNAME) $(NAME)

$(NAME):
	@gcc $(GCCFLAGS) -o $(NAME) -L . $(LIBNAME)

$(LIBNAME): libcompile
	@ar rc $(LIBNAME) $(OBJ)
	@ranlib $(LIBNAME)

libcompile:
	@gcc $(GCCFLAGS) -c $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(LIBNAME)

re: fclean all

