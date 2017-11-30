/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** display ll file
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>

void	display_link(linked_list_t *list);

void	display_size(linked_list_t *list);

int	check_argu(linked_list_t *list, char *flags)
{
	int i = 1;
	int len = my_strlen(flags);
	int a = 0;

	while (i < len) {
		a = 0;
		while (a < 2) {
			if (flags[i] == flaga[a].balise) {
				flaga[a].fptr(list);
				return (0);
			}
		a++;
		}
		i++;
	}
	my_printf("%s\n", ((info_t *)list->data)->name);
	return (1);
}

void	display(linked_list_t *list, char *flags)
{
	if (check_flag_l(flags) == 1)
		display_total(list);
	while (list != NULL) {
		check_argu(list, flags);
		list = list->next;
	}
}
