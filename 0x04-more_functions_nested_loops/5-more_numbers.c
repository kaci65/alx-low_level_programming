#include <stdio.h>
#include "holberton.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: void
*/
void more_numbers(void)
{
	int i;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
