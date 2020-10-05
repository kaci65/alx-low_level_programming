#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @*s: pointer to memory area to be filled
 * @b: character to fill memory area with
 * @n: number of bytes to be filled
 * Return: pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s;
	char value = b;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
	}
	return (memory);
}

