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

linked_list_t	*flag_modify_list(linked_list_t *list, char *flags)
{
	int i = 0;
	int compteur = 0;

	while (flags[i] != '\0') {
		switch (flags[i]) {
			case 'r': if (compteur == 0) {
				reverse_list(&list);
				compteur++;
			}
				break;
		}
		i++;
	}
	return (list);
}

void	my_ls(int ac, char **av)
{
	linked_list_t *list = create_list();
	char *flags = determinate_param(ac, av);

	list = flag_modify_list(list, flags);
	display(list, flags);
}
