/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** display ll file
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>

void	display_link(linked_list_t *list)
{
	int len = lenint(((info_t *)list->data)->stat->st_nlink);

	while (len != 2) {
		my_printf(" ");
		len++;
	}
	my_printf("%i ", ((info_t *)list->data)->stat->st_nlink);
}

void	display_size(linked_list_t *list)
{
	int len = lenint((((info_t *)list->data)->stat->st_size));

	while (len != 6) {
		my_printf(" ");
		len++;
	}
	my_printf("%i ", ((info_t *)list->data)->stat->st_size);

}

int	check_argu(linked_list_t *list, char *flags)
{
	int i = 1;
	int len = my_strlen(flags);

	while (i < len) {
		if (flags[i] == flaga.balise) {
			flaga.fptr(list);
			return (0);
		}
		i++;
	}
	my_printf("%s\n", ((info_t *)list->data)->name);
	return (1);
}

void	display(linked_list_t *list, char *flags)
{
	int i = 0;

	while (flags[i] != '\0') {
		if (flags[i] == 'l')
			display_total(list);
		i++;
	}
	while (list != NULL) {
		check_argu(list, flags);
		list = list->next;
	}
}
