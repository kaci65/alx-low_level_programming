#include <stdio.h>
#include "holberton.h"

/**
 * _puts - print a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{	
	int j = 0;
	
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
