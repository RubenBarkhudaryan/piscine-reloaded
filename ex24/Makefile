# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INCLUDE_DIR = includes
SRC = $(SRC_DIR)/ft_putchar.c \
      $(SRC_DIR)/ft_putstr.c \
      $(SRC_DIR)/ft_strcmp.c \
      $(SRC_DIR)/ft_strlen.c \
      $(SRC_DIR)/ft_swap.c
OBJ = $(SRC:.c=.o)
NAME = libft.a

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
