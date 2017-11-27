/*
** EPITECH PROJECT, 2017
** myprintf
** File description:
** printf
*/

#include "my.h"

int	speci_printInt0(char *str, int nb)
{
	int var = 0;
	int var2 = 0;

	var = my_getnbr(str);
	var2 = lenint(nb) - var;
	var = lenint(var) + 1;
	while (var2 < 0) {
		my_putchar('0');
		var2++;
	}
	return (var);
}

int	speci_printInt1(int nb)
{
	int var = 1;

	if (nb >= 0)
		my_putchar('+');
	return (var);
}

int	speci_printInt2(char *str)
{
	int var = 0;

	var = my_getnbr(str);
	if (var == 0)
		my_putchar(' ');
	while (var != 0) {
		my_putchar(' ');
		var--;
	}
	var = lenint(my_getnbr(str)) + 1;
	return (var);
}

int	speci_printInt4(char *str, int nb)
{
	int var = 0;
	int var2 = 0;

	var = my_getnbr(str);
	var2 = lenint(nb) - var;
	if (str[0] >= '0' && str[0] <= '9')
		var = lenint(var);
	else
		var = 0;
	while (var2 < 0) {
		my_putchar(' ');
		var2++;
	}
	return (var);
}
