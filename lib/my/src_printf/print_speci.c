/*
** EPITECH PROJECT, 2017
** myprintf
** File description:
** printf
*/

#include "my.h"

int	speci_printInt(char *str, int nb)
{
	int var = 0;
	int speci = find_speci(str);

	switch (speci) {
		case 0:
			var = speci_printInt0(str, nb);
			break;
		case 1:
			var = speci_printInt1(nb);
			break;
		case 2:
			var = speci_printInt2(str);
			break;
		case 4:
			var = speci_printInt4(str, nb);
			break;
		}
		return (var);
}

int	speci_printOct(char *str, char *string)
{
	int speci = find_speci(str);
	int var = 0;

	switch (speci) {
		case 0:	var = printOct_speci0(str, string);
			break;
		case 1:	var = printOct_speci1(string);
			break;
		case 2:	var = printOct_speci2(str, string);
			break;
		case 3:	my_putchar('0');
			var = 1;
			break;
		case 4:	printOct_speci4(str, string);
			break;
		}
		return (var);
}

int	speci_printHexa(char *str, char *string)
{
	int speci = find_speci(str);
	int var = 0;

	switch (speci) {
		case 0:	var = printHexa_speci0(str, string);
			break;
		case 1:	var = printHexa_speci1(string);
			break;
		case 2:	var = printHexa_speci2(str, string);
			break;
		case 3:	my_putstr("0x");
			var = 1;
			break;
		case 4:	var = printOct_speci4(str, string);
			break;
		}
		return (var);
}

int	speci_printHexa_maj(char *str, char *string)
{
	int speci = find_speci(str);
	int var = 0;

	switch (speci) {
		case 0:	var = printHexa_speci0(str, string);
			break;
		case 1:	var = printHexa_speci1(string);
			break;
		case 2:	var = printHexa_speci2(str, string);
			break;
		case 3:	my_putstr("0X");
			var = 1;
			break;
		case 4:	var = printOct_speci4(str, string);
			break;
		}
		return (var);
}

int	speci_printUnint(char *str, unsigned int nb)
{
	int var = 0;
	int speci = find_speci(str);

	switch (speci) {
		case 0:
			var = printUnint_speci0(str, nb);
			break;
		case 4:
			var = printUnint_speci4(str, nb);
			break;
		}
		return (var);
}
