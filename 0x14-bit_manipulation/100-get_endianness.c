#include "holberton.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian
 *         1 if little endian
 */
int get_endianness(void)
{
	/**
	 * Little and big endian - ways of storing multibyte data-types
	 * In little endian machines, last byte of binary representation
	 * of multibyte data-type is stored first
	 * In big endian machines, first byte of binary representation
	 * of multibyte data-type is stored first
	 */

	int j = 1;
	char *check_endian = (char *)&j;

	if (*check_endian)
	{
		return (1);
	}
	return (0);
}
