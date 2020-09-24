#include <stdio.h>
#include "holberton.h"
/**
* print_line - draw a straight line in the terminal
* @n: number of times the character _ should be printed
* Return: void
*/
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		_putchar('\n');
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
