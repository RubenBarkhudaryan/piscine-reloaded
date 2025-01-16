CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c ft_functions.c
OBJ = $(SRC:.c=.o)
NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)