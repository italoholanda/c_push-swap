# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 20:31:23 by igomes-h          #+#    #+#              #
#    Updated: 2022/04/08 23:48:33 by igomes-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## INCLUDES ##
LIBFT:= ./libft/libft.a
PRINTF:= ./libft/ftprintf.a
INCLUDE:= $(PRINTF) $(LIBFT)

## SOURCE ##
SRC:= push_swap.c

## BIN ##
# BIN:= push_swap.o

## NAME ##
NAME:= push_swap

## COMPILER ##
CC:= gcc
SFLAG:= -Wall -Werror -Wextra
DEBUG:= -fsanitize=address

all: $(NAME)

$(NAME):
	make -C ./libft
	$(CC) $(SRC) -o $(NAME) $(SFLAG) $(INCLUDE) $(DEBUG)

clean:
	make -C ./libft clean
	rm -rf $(BIN) --verbose

fclean: clean
	make -C ./libft fclean
	rm -rf $(NAME) --verbose

re: fclean all

run: re
	clear
	./$(NAME)

