#include "holberton.h"
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: 0 - If there's 1 o more chars in string b that is not 0 or 1
 *         0 - If  b is null
 *         Otherwise: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_ui = 0;
	int index;

	index = 0;

	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		index++;
	}

	for (index = 0; b[index] == '0' || b[index] == '1'; index++)
	{
		num_ui = num_ui * 2;

		if (b[index] == '1')
			num_ui++;
	}
	return (num_ui);
}
