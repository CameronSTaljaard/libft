NAME	= test
LIBFT	= libft.a
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
HEADERS	= -I libft
SRC		= main.c
OBJ		= $(SRC:.c=.o)

$(NAME): libft/libft.h libft/libft.a main.c
	$(CC) $(CFLAGS) $(SRC) $(LIBFT) $(HEADERS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: clean fclean