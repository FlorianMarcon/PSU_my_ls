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

void	display_all(linked_list_t *list)
{
	determinate_type(list);
	determinate_right(list);
	my_printf("%i	", ((info_t *)list->data)->stat->st_nlink);
	display_uid_gid(list);
	my_printf("%i	", ((info_t *)list->data)->stat->st_size);
	display_time(list);
	my_printf("%s\n", ((info_t *)list->data)->name);
}
