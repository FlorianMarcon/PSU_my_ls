/*
** EPITECH PROJECT, 2017
** bootstrap my _ls
** File description:
** create list
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>

int	comparaison(linked_list_t *buffer, linked_list_t *list);

linked_list_t	*search_greater(linked_list_t *list)
{
	linked_list_t *buffer;

	buffer = list;
	list = list->next;
	while (list != NULL){
		if (comparaison(buffer, list) == 2)
			buffer = list;
		list = list->next;
	}
	return (buffer);
}

void	stock_new_list(linked_list_t **listt, linked_list_t *new,
			linked_list_t *buffer)
{
	linked_list_t *list = *listt;

	while (new->next != NULL)
		new = new->next;
	if (list == buffer) {
		list = list->next;
		buffer->next = NULL;
		new->next = buffer;
		*listt = list;
	} else {
		while (list->next != buffer)
			list = list->next;
		list->next = list->next->next;
		new->next = buffer;
		buffer->next = NULL;
	}
}

linked_list_t	*sort_list_alpha(linked_list_t *list)
{
	linked_list_t *new = init_new_list(&list);
	linked_list_t *buffer;

	while (list != NULL) {
		buffer = search_greater(list);
		stock_new_list(&list, new, buffer);
	}
	return (new);
}
