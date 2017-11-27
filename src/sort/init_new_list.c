/*
** EPITECH PROJECT, 2017
** bootstrap my _ls
** File description:
** create list
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>

linked_list_t	*search_point(linked_list_t *list)
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

linked_list_t	*init_new_with_point(linked_list_t **listt)
{
	linked_list_t *list = *listt;
	linked_list_t *new = search_point(list);

	if (list == new) {
		list = list->next;
		new->next = NULL;
		*listt = list;
	} else {
		while (list->next != new)
			list = list->next;
		list->next = list->next->next;
		new->next = NULL;
	}
	return (new);
}

void	init_new_with_pointpoint(linked_list_t **listt, linked_list_t *new)
{
	linked_list_t *list = *listt;
	linked_list_t *buffer = search_point(list);

	if (list == buffer) {
		list = list->next;
		buffer->next = NULL,
		new->next = buffer;
		*listt = list;
	} else {
		while (list->next != buffer)
			list = list->next;
		list->next = list->next->next;
		buffer->next = NULL;
		new->next = buffer;
	}
}

linked_list_t	*init_new_list(linked_list_t **list)
{
	linked_list_t *new = init_new_with_point(list);

	init_new_with_pointpoint(list, new);
	return (new);
}
