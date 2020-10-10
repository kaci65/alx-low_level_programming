#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: string dest
 * @src: string to be appended
 * @n: n bytes of src are copied
 * Return: pointer to destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for ( ; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
