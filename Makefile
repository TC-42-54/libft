#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 11:15:14 by tchezier          #+#    #+#              #
#    Updated: 2014/11/10 16:15:40 by tchezier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

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
				ft_strncpy.c	\
				ft_memmove.c	\
				ft_strcat.c		\
				ft_strncat.c	\
				ft_strchr.c		\
				ft_strrchr.c	\
				ft_strstr.c		\
				ft_strcmp.c		\
				ft_strncmp.c	\
				ft_isalpha.c	\
				ft_isdigit.c	\
				ft_isalnum.c	\
				ft_isascii.c	\
				ft_isprint.c	\
				ft_atoi.c		\
				ft_strnstr.c	\
				ft_toupper.c	\
				ft_tolower.c

MSRC = ./ft_bzero.c      \
				ft_memset.c     \
				ft_putchar.c    \
				ft_putstr.c     \
				ft_strlen.c     \
				ft_putnbr.c    	\
				ft_strcpy.c     \
				ft_memcpy.c     \
				ft_memccpy.c    \
				ft_strdup.c     \
				ft_strncpy.c    \
				ft_memmove.c    \
				ft_strcat.c     \
				ft_strncat.c    \
				ft_strchr.c		\
				ft_strrchr.c	\
				ft_strstr.c		\
				ft_strcmp.c		\
				ft_strncmp.c	\
				ft_isalpha.c	\
				ft_isdigit.c	\
				ft_isalnum.c	\
				ft_isascii.c	\
				ft_isprint.c	\
				ft_atoi.c		\
				ft_strnstr.c	\
				ft_toupper.c	\
				ft_tolower.c

OBJ = ft_bzero.o		\
		ft_memset.o		\
		ft_putchar.o	\
		ft_putstr.o		\
		ft_strlen.o		\
		ft_putnbr.o		\
		ft_strcpy.o		\
		ft_memcpy.o		\
		ft_memccpy.o	\
		ft_strdup.o		\
		ft_strncpy.o	\
		ft_memmove.o	\
		ft_strcat.o		\
		ft_strncat.o	\
		ft_strchr.o		\
		ft_strrchr.o	\
		ft_strstr.o		\
		ft_strcmp.o		\
		ft_strncmp.o	\
		ft_isalpha.o	\
		ft_isdigit.o	\
		ft_isalnum.o	\
		ft_isascii.o	\
		ft_isprint.o	\
		ft_atoi.o		\
		ft_strnstr.o	\
		ft_toupper.o	\
		ft_tolower.o

HEADER = ./includes/

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER)
		ar -rs  ./lib/$(NAME) $(OBJ)

debug:
		gcc -o $(NAME) -g $(SRC) -I $(HEADER)

exec:
	gcc -I $(HEADER) -L lib main.c -o libtest -lft

clean:
		rm -f $(OBJ)

fclean:
		make clean
		rm -f $(NAME) 

re:
		make fclean
		make all

git:
		git add $(MSRC)
		git commit -m "maj"
		git push

cp:
		cp $(MSRC) ../librairie/$(CPSRC)