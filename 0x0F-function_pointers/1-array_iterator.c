#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 *                  parameter on each element of an array
 * @array: array containing elements
 * @size: size of array
 * @action: pointer to function to execute array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != NULL || action != NULL)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
