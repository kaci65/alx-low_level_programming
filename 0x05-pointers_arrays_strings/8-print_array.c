#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer containing array
 * @n: number of elements of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d, ", a[j]);
	}
	printf("\n");
}
