#include <stdio.h>
#include "holberton.h"
/**
* print_diagonal - draw a diagonal line on the terminal
* @n: number of times the character \ should be printed
* Return: void
*/
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
			_putchar('\n');
	}
}
