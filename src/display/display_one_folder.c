/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** one argu
*/

#include "my.h"
#include "header_LS.h"
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

void	display_one_folder(char *flags)
{
	linked_list_t *list = create_list(".", flags);

	if (check_flag_d(flags) == 0) {
		list = sort_list_alpha(list);
		list = flag_modify_list(list, flags);
	}
	display(list, flags);
}
