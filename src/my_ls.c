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

int	display_in_folder(char *str, char *flags)
{
	linked_list_t *list = NULL;

	list = create_list(str, flags);
	if (check_flag_d(flags) == 0) {
		list = sort_list_alpha(list);
		list = flag_modify_list(list, flags);
	}
	display(list, flags);
	free(list);
	return (1);
}

int	multi_path(int ac, char **av)
{
	char *flags = determinate_param(ac, av);
	int i = 1;
	int compteur = 0;
	DIR *dir = NULL;

	while (i < ac){
		if (av[i][0] != '-') {
			if ((dir = opendir(av[i])) != NULL) {
				compteur += display_in_folder(av[i], flags);
			}
			else
				compteur += display_one_file(av[i], flags);
		 }
		i++;
	}
	return (compteur);
}
void	my_ls(int ac, char **av)
{
	char *flags = determinate_param(ac, av);

	if (multi_path(ac, av) == 0)
		display_one_folder(flags);
}
