#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char str;
	int i;
	int length;

	for (i = 0; i < str; i++)
	{
		if (s[i] == '\0')
		break;
		str++;
	}
	length = i;
	str--;

	for (i = length; i > 0; i--)
	{
		s--;
	}
}
