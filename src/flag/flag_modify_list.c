/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** flag_modify_list
*/

#include "my.h"
#include "header_LS.h"
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

linked_list_t	*flag_reverse_list(linked_list_t *list, char *flags)
{
	int i = 0;
	int compteur = 0;

	while (flags[i] != '\0') {
		if (flags[i] == 'r' && compteur == 0) {
			reverse_list(&list);
			compteur++;
		}
		i++;
	}
	return (list);
}

linked_list_t	*flag_sort_time(linked_list_t *list, char *flags)
{
	int i = 0;
	int compteur = 0;

	while (flags[i] != '\0') {
		if (flags[i] == 't' && compteur == 0) {
			sort_by_time(&list);
			compteur++;
		}
		i++;
	}
	return (list);
}

linked_list_t	*flag_modify_list(linked_list_t *list, char *flags)
{
	list = flag_sort_time(list, flags);
	list = flag_reverse_list(list, flags);
	return (list);
}
