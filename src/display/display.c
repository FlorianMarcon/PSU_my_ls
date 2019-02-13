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

void	display(linked_list_t *list, char *flags)
{
	if (check_flag_l(flags) == 1) {
		display_total(list);
		while (list != NULL) {
			display_all(list);
			list = list->next;
		}
	} else {
		while (list != NULL) {
			my_printf("%s\n", ((info_t *)list->data)->name);
			list = list->next;
		}
	}
}
