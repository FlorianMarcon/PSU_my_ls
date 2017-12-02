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
	uid_t uid = ((info_t *)list->data)->stat->st_uid;
	gid_t gid = ((info_t *)list->data)->stat->st_gid;
	struct passwd *info_uid = getpwuid(uid);
	struct group *info_gid = getgrgid(gid);

	my_printf("%s ", info_uid->pw_name);
	my_printf("%s ", info_gid->gr_name);
}
