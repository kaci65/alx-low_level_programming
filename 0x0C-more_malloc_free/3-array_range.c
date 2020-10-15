#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - creates an array of integers
 * @min: first element of array
 * @max: last element of array
 *
 * Return: NULL on failure or min > max
 *         Otherwise - Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr_nums;
	int size;
	int index;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	arr_nums = malloc(sizeof(int) * size);

	if (arr_nums == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		arr_nums[index] = min++;
	}
	return (arr_nums);
	free(arr_nums);
}
