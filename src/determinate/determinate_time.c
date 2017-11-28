/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** determinate_time
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <sys/types.h>
#include <grp.h>

void	display_time(linked_list_t *list)
{
	time_t heure = ((info_t *)list->data)->stat->st_mtime;
	char *month = ctime(&heure);
	char *hours;

	month = &month[4];
	month[3] = '\0';
	my_printf("%s	", month);
	hours = ctime(&heure);
	hours = &hours[8];
	hours[8] = '\0';
	my_printf("%s	", hours);
}
