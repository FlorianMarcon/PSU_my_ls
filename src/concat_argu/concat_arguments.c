/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** concat_param
*/

#include "my.h"
#include "header_LS.h"
#include <stdlib.h>

char	*concat_param(char *str1, char *str2)
{
	char *new = NULL;
	int i = 0;
	int a = 0;

	new = malloc(sizeof(char) * (my_strlen(str1) + my_strlen(str2) + 1));
	my_strcpy(new, str1);
	while (new[i] != '\0')
		i++;
	while (str2[a] != '\0') {
		if (str2[a] != '-') {
			new[i] = str2[a];
			i++;
		}
		a++;
	}
	new[i] = '\0';
	free(str1);
	return (new);
}

char	*determinate_param(int ac, char **av)
{
	int i = 1;
	char *result = malloc(sizeof(char));

	result[0] = '-';
	while (i != ac) {
		if (av[i][0] == '-') {
			result = concat_param(result, av[i]);
		}
		i++;
	}
	return (result);
}
