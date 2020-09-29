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

	int a;
	int z;
	int temp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (z = 0; a > z; z++, a--)
	{
		temp = s[a];
		s[a] = s[z];
		s[z] = temp;
	}
}
