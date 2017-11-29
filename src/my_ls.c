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
	char *flags = determinate_param(ac, av);
	linked_list_t *list = NULL;
	int i = 1;
	int compteur = 0;

	while (i < ac){
		if (av[i][0] != '-') {
			list = create_list(av[i]);
			list = sort_list_alpha(list);
			list = flag_modify_list(list, flags);
			display(list, flags);
			compteur++;
		}
		i++;
	}
	if (compteur == 0) {
		display_one_folder(flags);
	}
}
