#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid perviously created
 * @grid: 2D array to be freed
 * @height: height of the grid
 *
 * Return: A freed grid
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
