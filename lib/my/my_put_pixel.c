/*
** EPITECH PROJECT, 2017
** Graphics
** File description:
** modify pixels
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "my.h"

void	my_put_pixel(framebuffer_t *buffer,
			 unsigned int x, unsigned int y, sfColor color)
{
	unsigned int var = (x + y * buffer->width) * 4;

	buffer->pixels[var] = color.r;
	buffer->pixels[var + 1] = color.g;
	buffer->pixels[var + 2] = color.b;
	buffer->pixels[var + 3] = color.a;
}
