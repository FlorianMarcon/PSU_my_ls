/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** determinate iud gid
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <sys/types.h>
#include <grp.h>

void	display_uid_gid(linked_list_t *list)
{
	struct passwd *info_uid = getpwuid(((info_t *)list->data)->stat->st_uid);
	struct group *info_gid = getgrgid(((info_t *)list->data)->stat->st_gid);

	my_printf("%s ", info_uid->pw_name);
	my_printf("%s ", info_gid->gr_name);
}
