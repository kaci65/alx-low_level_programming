#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *rot13 - encodes a string using rot13
 * @s: string to review
 * Return: char
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) < 'n')
		{
			*(s + i) = *(s + i) + 13;
		}
		else if (*(s + i) >= 'n' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 13;
		}
	}
	return (s);
}
