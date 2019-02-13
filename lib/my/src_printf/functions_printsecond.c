/*
** EPITECH PROJECT, 2017
** myprintf
** File description:
** printf
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_printf.h"

int	printBinary(va_list tmp, char *str)
{
	unsigned int unsi = va_arg(tmp, unsigned int);
	char *string = stock_int_in_str(unsi);
	int speci = find_speci(str);

	if (speci == 4) {
		string = convert_base(string, "0123456789", "01");
		my_putstr(string);
	}
	else
		my_putstr("\nDON'T NEED TO PRECISION: ONLY %%b\n");
	return (1);
}

int	printOct(va_list tmp, char *str)
{
	int nb = va_arg(tmp, int);
	char *string = stock_int_in_str(nb);
	int len;

	string = convert_base(string, "0123456789", "01234567");
	len = speci_printOct(str, string);
	my_putstr(string);
	return (len + 1);
}

int	printHexa(va_list tmp, char *str)
{
	int nb = va_arg(tmp, int);
	char *string = stock_int_in_str(nb);
	int len = 0;

	string = convert_base(string, "0123456789", "0123456789abcdef");
	len += speci_printHexa(str, string);
	string = my_strlowcase(string);
	my_putstr(string);
	return (len + 1);
}

int	printHexa_maj(va_list tmp, char *str)
{
	int nb = va_arg(tmp, int);
	char *string = stock_int_in_str(nb);
	int len =  0;

	string = convert_base(string, "0123456789", "0123456789ABCDEF");
	len += speci_printHexa_maj(str, string);
	my_putstr(string);
	return (len + 1);
}

void	printLen(va_list tmp, int size)
{
	int *len = va_arg(tmp , int *);

	*len = size;
}
