##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##
SRC_UT	=	comparaison/test_utils.c	\

SRC	=	../src/my_ls.c		\
		../src/sort/sort.c	\
		../src/create/create_list.c	\

OBJ	=	$(SRC:.c=.o)$(SRC_UT:.c=.o)

NAME	=	units

CFLAGS	=	-W -Wall -Wextra -Werror -I./../include -lcriterion

LDFLAGS	=	-lcriterion -lgcov
all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS) -L./lib/my -lmy 

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f *#

fclean:		clean
		rm -f $(NAME)

re:	fclean all
