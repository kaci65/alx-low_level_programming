#include <stdio.h>
#include "holberton.h"
/**
*times_table - prints the 9 times table, starting with 0
*Return: void
*/
void times_table(void)
{
	int i;
	int j;
	int multiply;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiply = i * j;
			_putchar(multiply);
		}
		_putchar('\n');
	}
}
