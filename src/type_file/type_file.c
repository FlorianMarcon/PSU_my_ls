/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** type_file
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <sys/types.h>
#include <grp.h>

int	regular_file(linked_list_t *list)
{
	int result = S_ISREG(((info_t *)list->data)->stat->st_mode);

	return (result);
}

int	directory_file(linked_list_t *list)
{
	int result = S_ISDIR(((info_t *)list->data)->stat->st_mode);

	return (result);
}

int	char_file(linked_list_t *list)
{
	int result = S_ISCHR(((info_t *)list->data)->stat->st_mode);

	return (result);
}

int	link_file(linked_list_t *list)
{
	int result = S_ISLNK(((info_t *)list->data)->stat->st_mode);

	return (result);
}
