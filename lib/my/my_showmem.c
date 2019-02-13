/*
** EPITECH PROJECT, 2017
** my_showmem
** File description:
** display memoire
*/

#include "my.h"

int	print_char(char const *str, int taille)
{
	int i = 0;

	while (i != taille) {
		if (str[i] < 32)
			my_putchar('.');
		else
			my_putchar(str[i]);
		i++;
		if ((i % 16) == 0)
			my_putchar('\n');
	}
	return (0);
}

int	convert_hexa(char lettre)
{
	char hexa[16] = "0123456789ABCDEF";

	my_putchar(hexa[lettre / 16]);
	my_putchar(hexa[lettre % 16]);
	return (0);
}

int	print_hexa(char const *str, int taille)
{
	int i = 0;

	while (i != taille) {
		convert_hexa(str[i]);
		i++;
		my_putchar(' ');
	}
	while (taille != 16) {
		my_putstr("   ");
		taille++;
	}
	my_putchar(' ');
	return (0);
}

int	print_position(int i)
{
	char arr[9] = "00000000\0";
	int a = 7;
	int nb;

	while (i != 0) {
		nb = i % 16;
		i = (i - nb) / 16;
		if (nb < 10)
			arr[a] = nb + 48;
		if (nb >= 10)
			arr[a] = nb + 55;
		a--;
	}
	while (a >= 0) {
		arr[a] = '0';
		a--;
	}
	my_putstr(arr);
	my_putstr(":  ");
	return (0);
}

int	my_showmem(char const *str, int size)
{
	char const *tmp;
	int i = 0;
	int taille;

	tmp = (char *)str;
	while (i <= size - 16) {
		tmp = &str[i];
		print_position(i);
		print_hexa(tmp, 16);
		print_char(tmp, 16);
		i += 16;
	}
	tmp = &str[i];
	print_position(i);
	taille = my_strlen(tmp);
	print_hexa(tmp, taille);
	print_char(tmp, taille);
	my_putchar('\n');
	return (0);
}
