#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be evaluated
 * @index:  index, starting from 0 of the bit you want to set
 * Return: -1 - if an error occured
 *         1 -if function works
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int res;
	/**
	 * if bit at index is 1, then set it to 0
	 * if it's 0, leave it unchanged
	 * use bitwise AND to clear bit (AND of 2 bits is 0 if any is 0)
	 */
	res = (1 << index);
	*n = (*n & (~res));
	/**
	 * shift 1 to the index position
	 * invert the string of bits
	 * use bitwise AND
	 */
	return (1);
}
