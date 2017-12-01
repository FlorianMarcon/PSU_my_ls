/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** know if number is neg
*/

#include "my.h"

int	my_isneg (int n)
{
	char p = 80;
	char n = 78;

	if (n >= 0)
		my_putchar(p);
	else
		my_putchar(n);
	my_putchar('\n');
	return (0);
}
