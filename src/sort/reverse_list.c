/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** reverse_list
*/

#include "my.h"
#include "header_LS.h"

void	reverse_list(linked_list_t **listt)
{
	linked_list_t *list = *listt;
	linked_list_t *buffer = *listt;
	linked_list_t *new = NULL;

	while (list != NULL) {
		list = list->next;
		buffer->next = new;
		new = buffer;
		buffer = list;
	}
	*listt = new;
}
