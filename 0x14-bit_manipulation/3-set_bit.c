#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be evaluated
 * @index:  index, starting from 0 of the bit you want to set
 * Return: -1 - if an error occured
 *         1 -if function works
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n = ((1 << index) | *n);
	/* bit at index is being set */
	/* result of bitwise OR (|) is 1 if either bit is 1 */
	return (1);
}
