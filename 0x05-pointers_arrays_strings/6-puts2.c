#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print every other character, starting with the first character
 * @str: string to be modified
 * Return: string of characters
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
	}
}
