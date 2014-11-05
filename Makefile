#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 11:15:14 by tchezier          #+#    #+#              #
#    Updated: 2014/11/05 17:51:09 by tchezier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libtest

SRC = ./test/main.c	\
				ft_bzero.c		\
				ft_memset.c		\
				ft_putchar.c 	\
				ft_putstr.c		\
				ft_strlen.c		\
				ft_putnbr.c		\
				ft_strcpy.c		\
				ft_memcpy.c		\
				ft_memccpy.c	\
				ft_strdup.c		\
				ft_strncpy.c

OBJ = ./main.o \
		ft_bzero.o		\
		ft_memset.o		\
		ft_putchar.o	\
		ft_putstr.o		\
		ft_strlen.o		\
		ft_putnbr.o		\
		ft_strcpy.o		\
		ft_memcpy.o		\
		ft_memccpy.o	\
		ft_strdup.o		\
		ft_strncpy.o

HEADER = ./includes/

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER)
		gcc -o $(NAME) $(OBJ) -I $(HEADER)

clean:
		rm -f $(OBJ)

fclean:
		make clean
		rm -f $(NAME) 

re:
		make fclean
		make all