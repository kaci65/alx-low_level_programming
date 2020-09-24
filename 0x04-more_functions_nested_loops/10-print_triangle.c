#include <stdio.h>
#include "holberton.h"
/**
* print_triangle - prints a triangle using character #
* @size: size of the triangle
* Return: void
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = size - 1; j >= i; j--)
			{
				_putchar(32);
			}
			for (k = 1; k <= i; k++)
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
