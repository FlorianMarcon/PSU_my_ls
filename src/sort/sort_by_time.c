/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** sort_by_time
*/

#include "my.h"
#include "header_LS.h"

linked_list_t	*search_greater_time(linked_list_t *list)
{
	linked_list_t *buffer = list;
	int time1;
	int time2;

	list = list->next;
	while (list != NULL) {
		time1 = ((info_t *)buffer->data)->stat->st_mtime;
		time2 = ((info_t *)list->data)->stat->st_mtime;
		if (time2 > time1)
			buffer = list;
		list = list->next;
	}
	return (buffer);
}
void	init_new(linked_list_t **neww, linked_list_t **listt)
{
	linked_list_t *list = *listt;
	linked_list_t *new = *neww;

	new = search_greater_time(list);
	if (list == new) {
		list = list->next;
		*listt = list;
		new->next = NULL;
		*neww = new;
	} else {
		while (list->next != new)
			list = list->next;
		list->next = list->next->next;
		new->next = NULL;
		*neww = new;
	}
}

void	add_in_new(linked_list_t **listt, linked_list_t *new,
		 linked_list_t *buffer)
{
	linked_list_t *list = *listt;

	while (new->next != NULL)
		new = new->next;
	if (list == buffer) {
		list = list->next;
		*listt = list;
		new->next = buffer;
		buffer->next = NULL;
	} else {
		while (list->next != buffer)
			list = list->next;
		list->next = list->next->next;
		buffer->next = NULL;
		new->next = buffer;
	}
}

void	sort_by_time(linked_list_t **listt)
{
	linked_list_t *list = *listt;
	linked_list_t *new = NULL;
	linked_list_t *buffer;

	init_new(&new, &list);
	while (list != NULL) {
		buffer = search_greater_time(list);
		add_in_new(&list, new, buffer);
	}
	*listt = new;
}
