#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer to find natural square root of
 * Return: Integer
 */
int _sqrt_recursion(int n)
{
	return (sqrt_value(n));
}

/**
 * sqrt_value - recursion function to find square root
 * @a: integer to be squared
 * @b: integer that is square of @a
 * Return: Integer
 */

int sqrt_value(int a, int b)
{
	if (a * a > b)
	{
		return (-1);
	}
	if (a * a == b)
	{
		return (a);
	}
	else
		return (sqrt_value(a, (b + 1)));
}
