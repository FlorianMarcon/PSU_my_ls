/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** i don't know
*/

#include <string.h>

int	my_strlen(char const *str);

char	*my_strcat(char *dest, char const *src)
{
	int n;
	int i = 0;

	n = my_strlen(dest);
	while (src[i] != '\0') {
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);

}
