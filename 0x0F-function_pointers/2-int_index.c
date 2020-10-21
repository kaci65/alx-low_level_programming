#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Index of the first element
 *         -1 if no element matches
 *         -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size == 0 || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) == 1)
		{
			return (index);
		}
	}
	return (-1);
}
