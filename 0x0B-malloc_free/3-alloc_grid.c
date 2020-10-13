#include <stdlib.h>
#include "holberton.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of ints
 * @width: columns of the array
 * @height: rows of the array
 *
 * Return: NULL on failure or if width/height is 0
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int row, column;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

	for (row = 0; row < height; row++)
	{
		array[row] = malloc(width * sizeof(int));

		if (array[row] == NULL)
		{
			for (row = 0; row >= 0; row--)
			{
				free(array[row]);
			}
			free(array);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			array[row][column] = 0;
		}
	}
	return (array);
}
