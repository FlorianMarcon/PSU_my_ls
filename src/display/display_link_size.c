/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** display_link_size
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>

void	display_link(linked_list_t *list)
{
	int len = lenint(((info_t *)list->data)->stat->st_nlink);

	while (len != 2) {
		my_printf(" ");
		len++;
	}
	my_printf("%i ", ((info_t *)list->data)->stat->st_nlink);
}

void	display_size(linked_list_t *list)
{
	int len = lenint((((info_t *)list->data)->stat->st_size));

	while (len != 6) {
		my_printf(" ");
		len++;
	}
	my_printf("%i ", ((info_t *)list->data)->stat->st_size);
}
