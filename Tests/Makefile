# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dzabrots <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/07 17:13:22 by dzabrots          #+#    #+#              #
#    Updated: 2017/12/18 12:43:39 by dzabrots         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = get_next_line.c main.c
LIB = ./libft/libft.a
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $<

$(LIB):
	make -C ./Libft

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
