# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 14:24:03 by rgeral            #+#    #+#              #
#    Updated: 2021/11/23 18:07:03 by rgeral           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LDFLAGS=-L.
LDLIBS=-lft
SRC = ft_printf.c\
ft_putchar_mod.c\
ft_putnbr_mod.c\
ft_putstr_mod.c\
ft_strlen_mod.c\
ft_hexa.c\
ft_printu.c\
ft_printp.c\

OBJ = $(SRC:.c=.o)
HEADER_FILE = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER_FILE)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER_FILE)
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re