NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -c
HDDIRS	= -I.

# Part 1
SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_memccpy.c
SRCS		+= ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c
SRCS		+= ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
# Part 2
SRCS		+= ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c
SRCS		+= ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c
SRCS		+= ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# Bonus
SRCS		+= ft_lstnew.c ft_lstdelone.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstdel.c
# Extra
SRCS		+= ft_iswhitespace.c ft_wordcount.c ft_sort_array.c ft_strswap.c ft_insert_node.c
SRCS		+= ft_free_list.c ft_min.c ft_max.c ft_isupper.c ft_intlen.c ft_frequency.c

OBJS		= $(SRCS:.c=.o)

OBJS =		$(SRCS:.c=.o)
FLAGS =		-Wall -Werror -Wextra
ALIASES =	>> ~/.zshrc

all:		$(NAME)

$(NAME):
		@gcc $(FLAGS) -c $(SRCS)
		@echo "All C files sucessfully compiled as objects!"
		@ar rc $(NAME) $(OBJS)
		@echo "Library [$(NAME)] archived succesfully!"
		@ranlib $(NAME)
		@echo "Library [$(NAME)] update success!"

clean:
		@/bin/rm -f $(OBJS)
		@echo "All object files removed."

libclean:
		@/bin/rm -f $(NAME)
		@echo "Library [$(NAME)] removed!"

fclean:		clean libclean

re:		fclean all
		@make clean

allclean:	fclean dela

compile:	dela
		@gcc $(FLAGS) main.c libft.a
		@echo "a.out: Successfully compiled with Main."

dela:
		@/bin/rm -f a.out
		@echo "a.out: successfully removed"
		@/bin/rm -f a.exe
		@echo "a.exe: successfully removed"

norme:
		Norminette $(SRCS)

cat1:	$(PART1)
		@cat $(PART1)

cat2:	$(PART2)
		@cat $(PART2)

catbonus:   $(BONUS)
		@cat $(BONUS)

catextra:   $(EXTRA)
		@cat $(EXTRA)

catft:	cat1 cat2 catbonus catextra

catheader: libft.h
		@cat libft.h

catall: catft catheader

compileAll:	re norme compile

config:
		vim ~/.zshrc

edit:
		vim Makefile

updateH:
		vim libft.h

updateMain:
		vim main.c

mainresults:
		open ~/Desktop/42FileChecker/maintest/libft/main.c

results:
		open ~/Desktop/42FileChecker/libft-unit-test/result.log

importAliases:
		@echo "" > ~/.zshrc
		@echo "Aliases emptied"
		@echo alias gcca="'gcc -Wall -Werror -Wextra'" $(ALIASES)
		@echo "Created alias [gcca]"
		@echo alias 42FileChecker="'bash ~/Desktop/42FileChecker/42FileChecker.sh'" $(ALIASES)
		@echo "Created alias [42FileChecker]"
		@echo alias mNorme="'make norme'" $(ALIASES)
		@echo "Created Alias [mNorme]"
		@echo alias mEdit="'make edit'" $(ALIASES)
		@echo "Created alias [mEdit]"
		@echo alias mCompile="'make compile'" $(ALIASES)
		@echo "Created Alias [mCompile]"
		@echo alias mConfig="'make config'" $(ALIASES)
		@echo "Created alias [mConfig]"
		@echo alias mCompileAll="'make compileAll'" $(ALIASES)
		@echo "Created alias [mCompileAll]"
		@echo alias mUpdateH="'make updateH'" $(ALIASES)
		@echo "Created alias [mUpdateH]"
		@echo alias mUpdateMain="'make updateMain'" $(ALIASES)
		@echo "Created alias [mUpdateMain]"
		@echo -e "PS!\nDon't forget to run command:\n['source ~/.zshrc']"

importFileChecker:
		@git clone https://github.com/jgigault/42FileChecker ~/Desktop/42FileChecker
		@echo "42 FileChecker cloned successfully"

42FC:
		@cd ~/Desktop/42FileChecker && bash ./42FileChecker.sh

setAliases:	importAliases
		@source ~/.zshrc
		@echo "Aliases activated!"
