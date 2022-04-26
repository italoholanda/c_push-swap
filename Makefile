# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 20:31:23 by igomes-h          #+#    #+#              #
#    Updated: 2022/04/26 19:14:10 by igomes-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## INCLUDES ##
LIBFT:= ./libft/libft.a
PRINTF:= ./libft/ftprintf.a
INCLUDE:= $(PRINTF) $(LIBFT)

## SOURCE ##
SRC:= push_swap.c ps_stack.c ps_check.c ps_mov_part1.c ps_mov_part2.c ps_init_sort.c ps_small_sort.c ps_radix_sort.c

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
	./$(NAME) 4 -1 2

