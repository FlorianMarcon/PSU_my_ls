##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##


CC	=	gcc

SRC	=	src/main.c		\
		src/my_ls.c		\
		src/create/create_list.c	\
		src/sort/sort.c			\
		src/sort/init_new_list.c	\
		src/sort/reverse_list.c		\
		src/sort/sort_by_time.c		\
		src/comparaison/comparaison.c	\
		src/display/display.c	\
		src/display/display_one_folder.c	\
		src/display/display_link_size.c		\
		src/display/display_recursive.c		\
		src/flag/flag.c		\
		src/flag/flag_modify_list.c	\
		src/type_file/type_file.c	\
		src/type_file/right_file.c	\
		src/determinate/determinate_right_type.c	\
		src/determinate/determinate_time.c	\
		src/determinate/determinate_iud_gid.c	\
		src/concat_argu/concat_arguments.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

CFLAGS	=	-W -Wall -Wextra -Werror -I./include -g3

LIB	=	-L./lib/my -lmy

all:	$(OBJ)
	make -C ./lib/my
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f *#

fclean:		clean
		rm -f $(NAME)
		make fclean -C ./lib/my

re:	fclean all
