#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be reversed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length;
	int i;
	char *begin;
	char *end;
	char temp;

	length = s;
	begin = s;
	end = s;

	for (i = 0; i < length - 1; i++)
	{
		end++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
	_putchar('\n');
}
