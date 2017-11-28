/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** display ll file
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>

int	check_argu(linked_list_t *list, char *flags)
{
	int i = 1;
	int len = my_strlen(flags);

	while (i < len) {
		if (flags[i] == flaga.balise) {
			flaga.fptr(list);
			return (0);
		}
		i++;
	}
	my_printf("%s\n", ((info_t *)list->data)->name);
	return (1);
}

void	display(linked_list_t *list, char *flags)
{
	while (list != NULL) {
		check_argu(list, flags);
		list = list->next;
	}
}
