#include "holberton.h"

/**
 * puts_half - print half of a string
 * @str: string to be half printed
 * Return: void
 */
void puts_half(char *str)
{
	int m;
	int n;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}
	n = 0;
	n = m / 2;
	if (m % 2 == 1)
	{
		n++;
	}
	while (str[n] != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
