#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: string dest
 * @src: string to be appended
 * Return: pointer to destination string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);

}
