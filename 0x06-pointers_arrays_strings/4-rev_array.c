#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array pointer
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start;
	int end = n - 1;
	int temp;

	for (start = 0; end; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
	for (start = 0; start < n; start++)
	{
	}
}
