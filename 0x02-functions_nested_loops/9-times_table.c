#include <stdio.h>
#include "holberton.h"
/**
* times_table - prints the 9 times table, starting with 0
* Return: void
*/
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		i = i * 1;
		_putchar(i);
	}
}
