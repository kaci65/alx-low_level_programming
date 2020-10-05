#include "holberton.h"

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: containing first occerence of any bytes in @accept
 * @accept: string with bytes to be located
 * Return: Pointer to byte in @s that matches one of the
 *         bytes in @accept, Null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
