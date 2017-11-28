/*
** EPITECH PROJECT, 2017
** bootstrap my _ls
** File description:
** create list
*/

#include "my.h"
#include "header_LS.h"
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

linked_list_t	*init_list(linked_list_t *list, info_t *info)
{
	list->data = (void *)info;
	list->next = NULL;
	return (list);
}

info_t	*create_info(struct dirent *tmp)
{
	info_t *info = malloc(sizeof(info_t));
	struct stat *buffer = malloc(sizeof(struct stat));

	info->name = malloc(sizeof(char) * (my_strlen(tmp->d_name) + 1));
	my_strcpy(info->name, tmp->d_name);
	lstat(info->name, buffer);
	info->stat = buffer;
	return (info);
}

linked_list_t	*create_list(char *path)
{
	DIR *dir = opendir(path);
	struct dirent *tmp = readdir(dir);
	linked_list_t *list = malloc(sizeof(linked_list_t));
	info_t *info = create_info(tmp);

	list = init_list(list, info);
	tmp = readdir(dir);
	while (tmp != NULL) {
		if (tmp->d_name[0] != '.') {
			info = create_info(tmp);
			create_node(list, (void *)info);
		}
		tmp = readdir(dir);
	}
	return (list);
}
