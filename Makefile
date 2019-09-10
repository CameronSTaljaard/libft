NAME		= libft.a
CC			= gcc
FLAGS		= -Wall -Werror -Wextra -c -Iincludes
INCLUDES 	= -I./includes
SRCS_DIR	= ./srcs/

# ----- Colors -----
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
CYAN:="\033[1;35m"
PURPLE:="\033[1;36m"
WHITE:="\033[1;37m"
EOC:="\033[0;0m"
# ==================

# Part 1
SRCS		= $(SRCS_DIR)ft_memset.c $(SRCS_DIR)ft_bzero.c $(SRCS_DIR)ft_memcpy.c $(SRCS_DIR)ft_memmove.c $(SRCS_DIR)ft_memchr.c 
SRCS		+= $(SRCS_DIR)ft_memcmp.c $(SRCS_DIR)ft_strlen.c $(SRCS_DIR)ft_strdup.c $(SRCS_DIR)ft_strcpy.c $(SRCS_DIR)ft_strncpy.c $(SRCS_DIR)ft_memccpy.c
SRCS		+= $(SRCS_DIR)ft_strcat.c $(SRCS_DIR)ft_strncat.c $(SRCS_DIR)ft_strlcat.c $(SRCS_DIR)ft_strchr.c $(SRCS_DIR)ft_strrchr.c $(SRCS_DIR)ft_strstr.c
SRCS		+= $(SRCS_DIR)ft_strnstr.c $(SRCS_DIR)ft_strcmp.c $(SRCS_DIR)ft_strncmp.c $(SRCS_DIR)ft_atoi.c $(SRCS_DIR)ft_isalpha.c $(SRCS_DIR)ft_tolower.c
SRCS		+= $(SRCS_DIR)ft_isdigit.c $(SRCS_DIR)ft_isalnum.c $(SRCS_DIR)ft_isascii.c $(SRCS_DIR)ft_isprint.c $(SRCS_DIR)ft_toupper.c
# Part 2
SRCS		+= $(SRCS_DIR)ft_memalloc.c $(SRCS_DIR)ft_memdel.c $(SRCS_DIR)ft_strnew.c $(SRCS_DIR)ft_strdel.c $(SRCS_DIR)ft_strequ.c
SRCS		+= $(SRCS_DIR)ft_strclr.c $(SRCS_DIR)ft_striter.c $(SRCS_DIR)ft_striteri.c $(SRCS_DIR)ft_strmap.c $(SRCS_DIR)ft_strmapi.c
SRCS		+= $(SRCS_DIR)ft_strnequ.c $(SRCS_DIR)ft_strsub.c $(SRCS_DIR)ft_strjoin.c $(SRCS_DIR)ft_strtrim.c $(SRCS_DIR)ft_strsplit.c
SRCS		+= $(SRCS_DIR)ft_itoa.c $(SRCS_DIR)ft_putchar.c $(SRCS_DIR)ft_putstr.c $(SRCS_DIR)ft_putendl.c $(SRCS_DIR)ft_putnbr_fd.c
SRCS		+= $(SRCS_DIR)ft_putnbr.c $(SRCS_DIR)ft_putchar_fd.c $(SRCS_DIR)ft_putstr_fd.c $(SRCS_DIR)ft_putendl_fd.c
# Bonus
SRCS		+= $(SRCS_DIR)ft_lstnew.c $(SRCS_DIR)ft_lstdelone.c $(SRCS_DIR)ft_lstadd.c $(SRCS_DIR)ft_lstiter.c $(SRCS_DIR)ft_lstmap.c $(SRCS_DIR)ft_lstdel.c
# Extra
SRCS		+= $(SRCS_DIR)ft_iswhitespace.c $(SRCS_DIR)ft_wordcount.c $(SRCS_DIR)ft_sort_array.c $(SRCS_DIR)ft_strswap.c $(SRCS_DIR)ft_insert_node.c
SRCS		+= $(SRCS_DIR)ft_free_list.c $(SRCS_DIR)ft_isupper.c $(SRCS_DIR)ft_intlen.c $(SRCS_DIR)ft_frequency.c $(SRCS_DIR)ft_putendl_col_fd.c
SRCS		+= $(SRCS_DIR)ft_putchar_col_fd.c $(SRCS_DIR)ft_putstr_col_fd.c $(SRCS_DIR)ft_putnbr_col_fd.c $(SRCS_DIR)ft_int_overflows.c $(SRCS_DIR)ft_putnbrl.c
SRCS		+= $(SRCS_DIR)ft_copy_array.c $(SRCS_DIR)ft_isnum.c $(SRCS_DIR)ft_freearray.c $(SRCS_DIR)ft_string_input.c $(SRCS_DIR)ft_realloc.c
# get_next_line
SRCS		+= $(SRCS_DIR)ft_copyuntil.c $(SRCS_DIR)get_next_line.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME) $(SRCS)

$(NAME): $(SRCS)
		@gcc $(FLAGS) $(INCLUDES) $(SRCS)
		@mv *.o $(SRCS_DIR)
		@echo $(GREEN)Compiled source files.$(EOC)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)
		@echo $(GREEN)Built library.$(EOC)

clean:
		@/bin/rm -f $(OBJS)
		@echo $(GREEN)Cleaned objects.$(EOC)

fclean: clean
		@/bin/rm -f $(NAME)
		@echo $(GREEN)Cleaned library.$(EOC)

re: fclean all
