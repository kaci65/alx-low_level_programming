#include <stdio.h>
#include "holberton.h"
/**
* print_line - draw a straight line in the terminal
* @n: number of times the character _ should be printed
* Return: void
*/
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar(95);
			i++;
		}
		else
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
}
