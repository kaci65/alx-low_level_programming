#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 *_isdigit - check for a digit (0 through 9)
 *@c: check this value
 *Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
