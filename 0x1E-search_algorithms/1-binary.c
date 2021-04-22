#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - print array after every iteration
 * @array: pointer to the first element of the array
 * @start: index to start printing array
 * @end: last index to stop printing at
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t n = start;
	/**
	 * n should always be equal to the element in the first index
	 * after every iteration (if the value is not found)
	 */

	printf("Searching in array: ");
	while (n <= end)
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
		n++;
	}
}
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
	size_t midpoint;

	if (array)
	{
		while (start <= end)
		{
			print_array(array, start, end);
			midpoint = (start + end) / 2;

			if (array[midpoint] > value)
			{
				end = midpoint - 1;
			}
			if (array[midpoint] < value)
			{
				start = midpoint + 1;
			}
			else
			{
				return (midpoint);
			}
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
