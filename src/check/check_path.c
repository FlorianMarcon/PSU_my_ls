/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** check_path
*/

#include "my.h"
#include "header_LS.h"
#include <stdlib.h>

char	*check_path(char *start)
{
	int len = my_strlen(start);
	char *final = NULL;

	if (start[len - 1] == '/')
		return (start);
	if ((final = malloc(sizeof(char) * (len + 2))) == NULL)
		exit (84);
	my_strcpy(final, start);
	final[len] = '/';
	final[len + 1] = '\0';
	return (final);
}
