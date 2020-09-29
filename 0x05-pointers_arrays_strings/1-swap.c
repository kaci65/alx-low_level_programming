#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: recieves address of variable a location
 * @b: receives address of variable b location
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
