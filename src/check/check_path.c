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
	if ((malloc(sizeof(char) * len + 2)) == NULL)
		return (NULL);
	my_strcpy(final, start);
	start[len] = '/';
	start[len + 1] = '\0';
	return (start);
}
