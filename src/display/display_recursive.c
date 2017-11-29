/*
** EPITECH PROJECT, 2017
**my_ls
** File description:
** display_recursive
*/

#include "my.h"
#include "header_LS.h"

void	display_recursive(linked_list_t *list)
{
	my_printf("%s\n", ((info_t *)list->data)->name);
}
