#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for value in array using Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements(integers) in array
 * @value: value to be searched
 * Return: first index where value is located
 *         -1 - If  value not present or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array)
	{
		while (n < size)
		{
			printf("Value checked array[%lu] = [%d]\n", n, array[n]);
			if (array[n] == value)
			{
				return (n);
			}
			n++;
		}
	}
	else
	{
		return (-1);
	}

	return (-1);
}
