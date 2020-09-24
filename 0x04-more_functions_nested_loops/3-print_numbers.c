#include <stdio.h>
#include "holberton.h"
/**
 *print_numbers - prints the numbers from 0 to 9
 *Return: void
 */
void print_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		_putchar(j + '0');
		j++;
	}
	_putchar('\n');
}
