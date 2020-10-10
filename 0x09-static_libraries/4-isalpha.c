#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - check for alphabetic character
 * Return: 1 if c is lowercase or 0 otherwise
 * @c: check this letter
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
