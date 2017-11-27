/*
** EPITECH PROJECT, 2017
** Graphics
** File description:
** framebuffer_create
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "my.h"

framebuffer_t	*framebuffer_create(unsigned int width, unsigned int height)
{
	framebuffer_t *tmp = malloc(sizeof(framebuffer_t));
	int var = width * height * 4;

	tmp->width = width;
	tmp->height = height;
	tmp->pixels = malloc(sizeof(framebuffer_t) *(width * height * 4));
	while (var >= 0) {
		tmp->pixels[var] = 0;
		var--;
	}
	return (tmp);
}
