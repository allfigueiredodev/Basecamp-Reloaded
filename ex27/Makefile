CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC = $(wildcard *.c)
OUTPUT = ft_display_file.out
NAME = ft_display_file
OBJ = $(SRC:.c=.o)

all:
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)	
