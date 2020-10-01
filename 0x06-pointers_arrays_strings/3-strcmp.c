#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: compare with s2
 * @s2: compare with s1
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int length;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (i > j)
	{
		return (length = (i - j));
	}
	else if (i < j)
	{
		return (length = (i - j));
	}
	return (0);
}
