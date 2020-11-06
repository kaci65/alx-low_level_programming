#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be evaluated
 * @index:  index, starting from 0 of the bit you want to get
 * Return: -1 - if an error occured
 *         Otherwise: value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index > ((sizeof(n) * 8) - 1))
		return (-1);
	for (j = 0; j < index; j++)
		n = n >> 1;

	return (n & 1);
}
