#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: input width
 * @height: input height
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **array;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		array[h] = malloc(sizeof(int) * width);

		if (array[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(array[w]);

			free(array);
			return (NULL);
		}

		for (w = 0; w < width; w++)
			array[w][h] = 0;
	}

	return (array);
}
