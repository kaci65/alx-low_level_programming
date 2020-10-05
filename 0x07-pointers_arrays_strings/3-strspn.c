#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: s segment containing bytes in @accept
 * @accept: bytes to check
 * Return: number of bytes that are coincidental
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	int position;
	int length;

	c = 0;
	while (c < length)
	{
		accept[c] = s[position + c - length];
		c++;
	}
	accept[c] = '\0';
	return (c);


}
