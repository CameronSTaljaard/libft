NAME	= test
FLAGS	= -Wall -Wextra -Werror
SRC		= main.c
LIBFT	= libft/*.c
TESTS	= tests/*.c
OBJ		= $(SRC:.c=.o)
COLOUR	= 147

$(NAME): $(LIBFT) $(TESTS) $(SRC)
	gcc $(FLAGS) $(SRC) $(LIBFT) $(TESTS) -o $(NAME)
	echo "\033[32m$(NAME) compiled successfully!\e[0m"

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: clean fclean