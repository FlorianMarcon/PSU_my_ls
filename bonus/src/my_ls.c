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

void	my_ls(int ac, char **av)
{
	linked_list_t *list = create_list();

	list = sort_list_alpha(list);
	display(list, ac, av);
}
