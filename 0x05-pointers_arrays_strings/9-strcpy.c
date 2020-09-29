#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copies the string from pointer src to pointer dest
 * @dest: have src contents
 * @src: copy contents to dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
