#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 *_isupper - check for uppercase character
 *Return: 1 if c is uppercase or 0 otherwise
 *@c: check this letter
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
