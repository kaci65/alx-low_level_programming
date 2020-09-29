#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be reversed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int j;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i = i - 1;

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
