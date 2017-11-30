/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** check flag l
*/

#include "my.h"
#include "header_LS.h"

int	check_flag_l(char *flags)
{
	int i = 0;

	while (flags[i] != '\0') {
		if (flags[i] == 'l')
			return (1);
		i++;
	}
	return (0);
}
