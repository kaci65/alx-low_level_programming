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
	int result;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		else if (s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
