#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: input grid
 * @height: input height
 *
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL)
		return;

	for (h = 0; h < height; h++)
	{
		if (grid[h] != NULL)
			free(grid[h]);
	}
	
	free(grid);
}
