#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * print_sign - print the sign of a number
 * Return: 1 and + or 0 and 0 or -1 and -
 * @n: check this letter
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
