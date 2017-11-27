/*
** EPITECH PROJECT, 2017
** bootstrap my _ls
** File description:
** function my_ls
*/

#include "my.h"
#include "header_LS.h"
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

void	my_ls()
{
	linked_list_t *list = create_list();

	list = sort_list_alpha(list);
	my_printf("\n\nfinal\n\n");
	while (list != NULL) {
		my_printf("%s\n", ((info_t *)list->data)->name);
		list = list->next;
	}
}
