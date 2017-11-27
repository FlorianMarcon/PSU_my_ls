/*
** EPITECH PROJECT, 2017
** test criterion
** File description:
** comparaison
*/

#include <criterion/criterion.h>

Test(compraison, test1)
{
	linked_list_t *first = malloc(sizeof(linked_list_t));
	linked_list_t *second = malloc(sizeof(linked_list_t));

	first->name = "TEST";
	second->name = "test";
	cr_asser_eq(comparaison(first, second), 1);
}
