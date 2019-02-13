/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** header_LS
*/

#include <sys/types.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <grp.h>
#include <pwd.h>
#include <stdio.h>
#include <time.h>

#ifndef LS
#define LS

int	display_one_file(char *str, char *flags);

char	*check_path(char *start);

int	check_flag_d(char *flags);

int	check_flag_l(char *flags);

void	display_one_folder(char *flags);

void	display_link(linked_list_t *list);

void	display_size(linked_list_t *list);

void	display_total(linked_list_t *list);

void	sort_by_time(linked_list_t **listt);

void	reverse_list(linked_list_t **listt);

linked_list_t	*flag_modify_list(linked_list_t *list, char *flags);

linked_list_t	*create_list(char *path, char *flags);

linked_list_t	*sort_list_alpha(linked_list_t *list);

linked_list_t	*init_new_list(linked_list_t **listt);

linked_list_t	*search_greater(linked_list_t *list);

void	display_time(linked_list_t *list);

void	determinate_type(linked_list_t *list);

void	display_uid_gid(linked_list_t *list);

int	comparaison(linked_list_t *buffer, linked_list_t *list);

int	check_argu(linked_list_t *list, char *flags);

void	display(linked_list_t *list, char *flags);

void	display_all(linked_list_t *list);

int	regular_file(linked_list_t *list);

int	directory_file(linked_list_t *list);

int	char_file(linked_list_t *list);

int	link_file(linked_list_t *list);

char	*determinate_param(int ac, char **av);

void	determinate_right(linked_list_t *list);

typedef struct info {
	char *name;
	struct stat *stat;
}info_t;

typedef struct argu {
	char balise;
	void (*fptr)(linked_list_t *list);
}argu_t;

typedef struct typ {
	char balise;
	int (*fptr)(linked_list_t *list);
}typ_t;

typedef struct right {
	int number;
	char *balise;
}right_t;

static argu_t const flaga = {'l', display_all};

static typ_t const typ[4] = {{'-', regular_file}, {'d', directory_file},
			{'c', char_file}, {'l', link_file}};

static right_t const tab_right[8] = {{0, "---\0"}, {1, "--r\0"}, {2, "-w-\0"},
				{3, "-wx\0"}, {4, "r--\0"}, {5, "r-x\0"},
				{6, "rw-\0"}, {7, "rwx\0"}};

#endif
