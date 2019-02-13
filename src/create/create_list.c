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

info_t	*create_info(struct dirent *tmp, char *path)
{
	info_t *info = malloc(sizeof(info_t));
	struct stat *buffer = malloc(sizeof(struct stat));
	char *name = my_strcat(path, tmp->d_name);

	info->name = malloc(sizeof(char) * (my_strlen(tmp->d_name) + 1));
	my_strcpy(info->name, tmp->d_name);
	lstat(name, buffer);
	info->stat = buffer;
	return (info);
}

linked_list_t	*build_list(struct dirent *tmp, DIR *dir, char *path)
{
	linked_list_t *list = malloc(sizeof(linked_list_t));
	info_t *info = create_info(tmp, path);

	list = init_list(list, info);
	tmp = readdir(dir);
	while (tmp != NULL) {
		if (tmp->d_name[0] != '.') {
			info = create_info(tmp, path);
			create_node(list, (void *)info);
		}
		tmp = readdir(dir);
	}
	return (list);
}

linked_list_t	*build_list_courant(struct dirent *tmp, DIR *dir, char *path)
{
	linked_list_t *list = malloc(sizeof(linked_list_t));
	info_t *info = NULL;

	tmp = readdir(dir);
	while (my_strcmp(tmp->d_name, ".") != 0)
		tmp = readdir(dir);
	info = create_info(tmp, path);
	list = init_list(list, info);
	return (list);
}

linked_list_t	*create_list(char *path, char *flags)
{
	DIR *dir = opendir(path);
	struct dirent *tmp = readdir(dir);
	linked_list_t *list = NULL;

	path = check_path(path);
	if (check_flag_d(flags) == 1) {
		list = build_list_courant(tmp, dir, path);
		return (list);
	}
	list = build_list(tmp, dir, path);
	return (list);
}
