#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: s segment containing bytes in @accept
 * @accept: bytes to check
 * Return: The number of bytes in @s which
 *         consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c; /** bytes */
	int index;

	c = 0;
	while (s++)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				c++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (c);
			}
		}
	}
	return (c);


}
