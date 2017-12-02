/*
** EPITECH PROJECT, 2017
** bootstrap my _ls
** File description:
** create list
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>

char	char_lowcase(char c)
{
	if (c < 'Z' && c > 'A')
		c += 32;
	return (c);
}

char	*delete_point(char *str)
{
	while (str[0] == '.')
		str = &str[1];
	return (str);
}

int	compare_str(char *str1, char *str2)
{
	int i = 0;
	char c1;
	char c2;

	str1 = delete_point(str1);
	str2 = delete_point(str2);
	while (i != my_strlen(str1)) {
		c1 = char_lowcase(str1[i]);
		c2 = char_lowcase(str2[i]);
		if (c1 > c2)
			return (2);
		else if (c1 < c2)
			return (1);
		else
			i++;
	}
	return (0);
}

int	comparaison(linked_list_t *buffer, linked_list_t *list)
{
	int result;
	char *str1 = ((info_t *)buffer->data)->name;
	char *str2 = ((info_t *)list->data)->name;

	result = compare_str(str1, str2);
	return (result);
}
