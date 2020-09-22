#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _abs - compute the absolute value of an integer
 * @j: integer to check absolute value
 Return: positive integer
 */
int _abs(int j)
{
	if (j < 0)
	{
		j = j * -1;
		return (j);
	}
	else
	{
		return (j);
	}
}
