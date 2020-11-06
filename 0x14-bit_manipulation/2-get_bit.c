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
	unsigned int val_bit;

	if (index > ((sizeof(n) * 8) - 1))
		return (-1);
	val_bit = ((n >> index) & 1);
	/* right shift n , index times and perform bitwise AND with 1 */

	return (val_bit);
}
