/*
** EPITECH PROJECT, 2017
** my_str_to_word_array.c
** File description:
** put word to str in array
*/

#include <stdlib.h>

int	my_putstr(char const *str);
int	my_str_isalpha(char const *str);
int	separateur(char const *str)
{
	int i = 0;
	int nb_separateur;

	while (str[i] != '\0') {
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65) ||
			(str[i] > 90 && str[i] < 97) || str[i] > 122)
			nb_separateur++;
		i ++;
	}
	nb_separateur++;
	return (nb_separateur);
}

char	**mise_en_tableau(char const *str, int nb_separateur)
{
	int i = 0;
	int a = 0;
	int c = 0;
	int b = 0;
	char **arr;

	arr = malloc (sizeof(int) * (nb_separateur + 1));
	while (str[i] != '\0') {
		if (str[i] < 48 ||(str[i] > 57 && str[i] < 65) ||
			(str[i] > 90 && str[i] < 97) || str[i] > 122) {
			arr[c] = malloc(sizeof(int) * (a + 1));
			while (b != a) {
				arr[c][b] = str[i - a + b];
				b++;
			}
			arr[c][b] = '\0';
			b = 0;
			a = -1;
			c++;
		}
		i++;
		a++;
	}
	arr[c] = NULL;
	return (arr);
}
char	**my_str_to_word_array(char const *str)
{
	int nb_separateur = 0;
	char **arr2;

	nb_separateur = separateur(str);
	arr2 = mise_en_tableau(str, nb_separateur);
	return (arr2);
}
