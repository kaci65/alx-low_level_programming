#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in sorted array of integers
 *                 using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to be searched
 * Return: index where value is located
 *         -1 - If  value not present or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t midpoint, n;

	if (!array)
	{
		return (-1);
	}
	while (start <= end)
	{
		printf("Searching in array: ");
		for (n = start; n <= end; n++)
		{
			printf("%d", array[n]);
			if (n != end)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
		midpoint = (start + end) / 2;

		if (array[midpoint] > value)
		{
			end = midpoint - 1;
		}
		if (array[midpoint] < value)
		{
			start = midpoint + 1;
		}
		else if (array[midpoint] == value)
		{
			return (midpoint);
		}
	}
	return (-1);
}
