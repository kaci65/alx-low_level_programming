#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @dest: string dest
 * @src: string to be appended
 * @n: condition to null terminate src
 * Return: pointer to destination string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[i] != '\0'; j++)
	{
		dest[i] = src[j];
	}

	return ((char *)dest);
}
