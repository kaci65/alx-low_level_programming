#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * _islower - check for lowercase character
 * Return: 1 if c is lowercase or 0 otherwise
 * @c: check this letter
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
