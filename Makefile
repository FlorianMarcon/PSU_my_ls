##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	src/main.c		\
		src/my_ls.c		\
		src/create/create_list.c	\
		src/sort/sort.c			\
		src/sort/init_new_list.c	\
		src/comparaison/comparaison.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

CFLAGS	=	-W -Wall -Wextra -Werror -I./include -g3

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f *#

fclean:		clean
		rm -f $(NAME)
		make fclean -C ./lib/my

re:	fclean all
