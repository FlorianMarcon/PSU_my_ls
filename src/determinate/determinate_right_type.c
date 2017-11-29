/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** determinate_right and type
*/

#include "my.h"
#include "header_LS.h"
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <sys/types.h>
#include <grp.h>

void	determinate_type(linked_list_t *list)
{
	int i = 0;

	while (i < 3) {
		if (typ[i].fptr(list) == 1)
			my_printf(" %c", typ[i].balise);
		i++;
	}
}
