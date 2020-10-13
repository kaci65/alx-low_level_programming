#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 *		created by  your alloc_grid function
 * @grid: 2 dimensional grid
 * @height: rows of the array
 *
 * Return: NULL on failure or if width/height is 0
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
