/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** right
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <sys/types.h>
#include <grp.h>
#include <sys/stat.h>
#include <unistd.h>

void	determinate_right_owner(linked_list_t *list)
{
	int right = ((info_t *)list->data)->stat->st_mode;
	int mod = right % 1000;
	int i = 0;

	mod = mod / 100;
	my_printf("mod == %i	", mod);
	while (i <= 7) {
		if (mod == tab_right[i].number)
			my_printf("%s", tab_right[i].balise);
		i++;
	}
}

void	determinate_right_group(linked_list_t *list)
{
	int right = ((info_t *)list->data)->stat->st_mode;
	int mod = right % 100;
	int i = 0;

	mod = mod / 10;
	while (i <= 7) {
		if (mod == tab_right[i].number)
			my_printf("%s", tab_right[i].balise);
		i++;
	}
}

void	determinate_right(linked_list_t *list)
{
	struct stat *file_stat = ((info_t *)list->data)->stat;

	my_printf((file_stat->st_mode & S_IRUSR) ? "r\0" : "-\0");
	my_printf((file_stat->st_mode & S_IWUSR) ? "w\0" : "-\0");
	my_printf((file_stat->st_mode & S_IXUSR) ? "x\0" : "-\0");
	my_printf((file_stat->st_mode & S_IRGRP) ? "r\0" : "-\0");
	my_printf((file_stat->st_mode & S_IWGRP) ? "w\0" : "-\0");
	my_printf((file_stat->st_mode & S_IXGRP) ? "x\0" : "-\0");
	my_printf((file_stat->st_mode & S_IROTH) ? "r\0" : "-\0");
	my_printf((file_stat->st_mode & S_IWOTH) ? "w\0" : "-\0");
	my_printf((file_stat->st_mode & S_IXOTH) ? "x \0" : "- \0");
}
