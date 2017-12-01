/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** display_one_file
*/

#include "my.h"
#include "header_LS.h"
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

char	**find_path(char *str)
{
	int i = 0;
	int tmp = -1;
	char **result = malloc(sizeof(char *) * 2);

	while (str[i] != '\0') {
		if (str[i] == '/')
			tmp = i;
		i++;
	}
	if (tmp >= 0) {
		str[tmp] = '\0';
		result[0] = str;
	} else
		result[0] = NULL;
	str = &str[tmp + 1];
	result[1] = str;
	return (result);
}

void	display_file(char *path, char *name, char *flags)
{
	linked_list_t *list = create_list(path, flags);

	if (check_flag_d(flags) == 0) {
		list = sort_list_alpha(list);
		list = flag_modify_list(list, flags);
	}
	while (my_strcmp(((info_t *)list->data)->name, name) != 0) {
		list = list->next;
	}
	if ((check_flag_l(flags)) == 1) {
		determinate_type(list);
		determinate_right(list);
		display_link(list);
		display_uid_gid(list);
		display_size(list);
		display_time(list);
		my_printf("%s\n", ((info_t *)list->data)->name);
	} else
		my_printf("%s\n", ((info_t *)list->data)->name);
}

int	display_one_file(char *str, char *flags)
{
	char **path = find_path(str);
	display_file(path[0], path[1], flags);
	return (1);
}
