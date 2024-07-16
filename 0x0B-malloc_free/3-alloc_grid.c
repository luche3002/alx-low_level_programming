#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - pointer to 2D array
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to array of NULL or failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free (grid[b]);
			}
			free (grid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
