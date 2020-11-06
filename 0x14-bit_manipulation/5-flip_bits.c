#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another
 * @n: number to be flipped
 * @m: number to flip to
 * Return: Number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int different;
	int numbits = 0;

	different = n ^ m;
	/* result of bitwise XOR is 1 if two bits are different */

	while (different)
	{
		/* result of AND is 1 if both bits are 1 */
		if (different & 1)
			numbits++;

		different = different >> 1;
		/* right shift different by 1 */
	}
	return (numbits);
}
