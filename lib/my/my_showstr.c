/*
** EPITECH PROJECT, 2017
** my_showstr.c
** File description:
**
*/

#include "my.h"

int	my_showstr(char const *str)
{
	int i = 0;
	int nb;
	int total = 0;
	char arr[6];
	int a = 0;

	arr[3] = '\0';
	while (str[i] != '\0') {
		if (str[i] > 31)
			my_putchar(str[i]);
		else {
			nb = str[i];
			while (nb != 0) {
				total = nb % 16;
				if (total > 9)
					arr[a] = total + 55;
				else
					arr[a] = total + 48;
				a++;
				nb = (nb - (nb % 16)) / 16;
			}
			my_putchar('\\');
			if(my_strlen(arr) == 1)
				my_putchar('0');
			my_revstr(arr);
			my_putstr(my_strlowcase(arr));
		}
		i++;
	}
	return (0);
}
