##
## EPITECH PROJECT, 2017
## Makefile pour compresser lib
## File description:
##
##

SRC	=	$(wildcard *.c)		\
		src_printf/printInt/print_int_speci.c	\
		src_printf/printOct/print_oct_speci.c	\
		src_printf/printHexa/print_hexa_speci.c	\
		src_printf/printUnint/print_unint_speci.c	\
		src_printf/my_printf.c	\
		src_printf/choice_function.c	\
		src_printf/functions_printfirst.c		\
		src_printf/functions_printsecond.c		\
		src_printf/functions_printthird.c		\
		src_printf/print_speci.c	\
		src_printf/speci.c		\
		convert_base/conv_base_to.c	\
		convert_base/convert_base.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I. -W -Wall -Wextra -Werror

all:		$(OBJ)
	ar rc libmy.a $(OBJ)
	rm *.o

clean:
	rm -f *.o
	rm -f *~
	rm -f *#
	rm -f src_printf/*.o
	rm -f src_printf/*~
	rm -f src_printf/*#
	rm -f convert_base/*.o
	rm -f convert_base/*~
	rm -f convert_base/*#
	rm -f src_printf/printHexa/*.o
	rm -f src_printf/printHexa/*~
	rm -f src_printf/printHexa/*#
	rm -f src_printf/printInt/*.o
	rm -f src_printf/printInt/*~
	rm -f src_printf/printInt/*#
	rm -f src_printf/printOct/*.o
	rm -f src_printf/printOct/*~
	rm -f src_printf/printOct/*#
	rm -f src_printf/printUnint/*.o
	rm -f src_printf/printUnint/*~
	rm -f src_printf/printUnint/*#

fclean: clean
	rm -f libmy.a
