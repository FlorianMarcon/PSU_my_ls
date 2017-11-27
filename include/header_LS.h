/*
** EPITECH PROJECT, 2017
** header_LS
** File description:
**
*/

#include <sys/types.h>
#include <dirent.h>

#ifndef LS
#define LS

linked_list_t	*create_list();

linked_list_t	*sort_list_alpha(linked_list_t *list);

linked_list_t	*init_new_list(linked_list_t **listt);

linked_list_t	*search_greater(linked_list_t *list);

int	comparaison(linked_list_t *buffer, linked_list_t *list);

typedef struct info {
	ino_t d_ino;
	off_t d_off;
	unsigned short d_reclen;
	unsigned char d_type;
	char *name;
}info_t;

#endif
