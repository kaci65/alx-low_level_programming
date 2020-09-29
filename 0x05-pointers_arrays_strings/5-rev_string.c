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
	int len;
	char *a, *z, n;

	len = strlen(s);
	a = s;
	z = s;

	for (i = 0; i < len - 1; i++)
	{
		z++;
	}
	for (i = 0; i < len / 2; i++)
	{
		n = *z;
		*z = *a;
		*a = n;

		a++;
		z--;
	}
}
