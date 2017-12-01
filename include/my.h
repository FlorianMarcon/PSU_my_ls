/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** header my.h
*/

#include <stdarg.h>
#include "my_printf.h"

#ifndef MY_
#define MY_

void	my_putchar(char c);		/*afficher un caractere*/

int	my_isneg(int nb);

int	my_put_nbr(int nb);		/*afficher un nombre*/

void	my_put_unnbr(unsigned int);	/*display unsigned number*/

int	my_swap(int *a, int *b);

int	my_putstr(char const *str);		/*afficher une chaine de caractere*/

int	my_strlen(char const *str);		/*avoir la longueur d'une chaine*/

int	my_getnbr(char const *str);		/* obtenir les nombres contenue dans une chaine de caractere*/

int	my_getnbr_before_letter(char const *str);		/*obtenir uniquement les chiffres devant les caracteres*/

void	my_sort_int_array(int *tab, int size);

int	my_compute_power_rec(int nb, int power);		/*mettre un nombre nb a la puissance power*/

int	my_compute_square_root(int nb);			/*obtenir la racine carré d'un nombre seulement si sa racine est un entier*/

int	my_is_prime(int nb);

int	my_find_prime_sup(int nb);		/*trouver le nombre premier superieur le plus proche de nb*/

char	*my_strcpy(char *dest, char const *src);	/*copier la chaine src dans la chaine dest*/

char	*my_strncpy(char *dest, char const *src, int n);		/*copier les n premiers caracteres de src dans dest*/

char	*my_revstr(char *str);		/*renverse la chaine str*/

char	*my_strstr(char const *str, char const *to_find);

int	my_strcmp(char const *s1, char const *s2);

int	my_strncmp(char const *s1, char const *s2, int n);

char	*my_strupcase(char *str);	/*met la chaine entiere en Majuscule*/

char	*my_strlowcase(char *str);		/*met les lettres en minuscule*/

char	*my_strcapitalize(char *str);		/*met la premiere lettre de chaque mot en majuscule*/

int	my_str_isalpha(char const *str);	/*verifie que chaque caractere soit une lettre*/

int	my_char_isalpha(char c);	/*verifie si un char est bien une lettre*/

int	my_char_isnum(char c);	/*verifie si un char est bien un chiffre*/

int	my_str_isnum(char const *str);		/*verifie que chaque caractere soit des nombres*/

int	my_str_islower(char const *str);

int	my_str_isupper(char const *str);

int	my_str_isprintable(char const *str);

int	my_showmem(char const *str, int size);

int	my_showstr(char const *str);

int	my_show_word_array(char *const *tab);

char	*my_strcat(char *dest, char const *src);

char	*my_strncat(char *dest, char const *src, int nb);

char	*my_strdup(char const *str);

char	*concat_params(int argc, char **argv);

int	my_show_word_array(char * const *tab);

char	**my_str_to_word_array(char const *str);

char	**mise_en_tableau(char const *str, int nb_separateur);

int	separateur(char const *str);

char	*convert_base(char const *nbr, char const *base_from, char const *base_to);

int	lenint(int nb);		/*nombre de digit d'unint*/

int	len_unint(unsigned int);	/*nombre de digit d'un unsigned*/

char	*stock_int_in_str(int nb); 	/*stock int sous forme de string*/

typedef struct linked_list
{
	void *data;
	struct linked_list *next;
} linked_list_t;

void	create_node(struct linked_list *tmp, void *dat);

void	delete_node(struct linked_list *precedent);

void	add_node(struct linked_list *precedent, struct linked_list *new);

struct linked_list	*get_lastnode(struct linked_list *tmp);

int	len_list(struct linked_list *tmp);

void	add_two_list(struct linked_list *first, struct linked_list *second);

#endif
