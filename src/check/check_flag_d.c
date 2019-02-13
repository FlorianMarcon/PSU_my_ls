/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** check_flag_d
*/

#include "my.h"
#include "header_LS.h"

int	check_flag_d(char *flags)
{
	int i = 0;

	while (flags[i] != '\0') {
		if (flags[i] == 'd')
			return (1);
		i++;
	}
	return (0);
}
