# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 15:43:01 by aperis-p          #+#    #+#              #
#    Updated: 2023/04/26 13:12:29 by aperis-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ./includes
SRC = $(wildcard ./srcs/*.c)
CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
OBJ = $(SRC:.c=.o)

all: $(NAME)	
	
$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -I $(HEADER) -c $< -o $@

clean:
	rm -rf */*.o
	
fclean: clean
	rm -rf libft.a	

re: fclean all
 	