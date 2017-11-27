/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** know if number is neg
*/

#include "my.h"

int	my_isneg (int n)
{
	char P = 80;
	char N = 78;

	if (n >= 0)
		my_putchar(P);
	else
		my_putchar(N);
	my_putchar('\n');
	return (0);
}
