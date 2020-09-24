#include <stdio.h>
#include "holberton.h"
/**
* print_square - prints a square, followed by a new line
* @size: is the size of the square
* Return: void
*/
void print_square(int size)
{
	int i;
	int j;
	
	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
