/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** flaga
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <sys/types.h>
#include <grp.h>

void	display_total(linked_list_t *list)
{
	int total = 0;

	while (list != NULL) {
		total += ((info_t *)list->data)->stat->st_blocks;
		list = list->next;
	}
	total = total / 2;
	my_printf("total %i\n\0", total);
}
void	display_all(linked_list_t *list)
{
	determinate_type(list);
	determinate_right(list);
	display_link(list);
	display_uid_gid(list);
	display_size(list);
	display_time(list);
	my_printf("%s\n", ((info_t *)list->data)->name);
}
