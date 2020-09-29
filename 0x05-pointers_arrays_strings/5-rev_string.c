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
	int i;
	int length;

	length = strlen(s);

	for (i = length; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
