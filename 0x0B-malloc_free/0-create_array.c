#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: size of array
 * @c: char that initializes array
 *
 * Return: NULL if size == 0 or the function fails
 *         Otherwise - a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array != NULL)
	{
		for (index = 0; index < size; index++)
		{
			array[index] = c;
		}
		return (array);
	}
	else
		return (NULL);
	free(array);
}
