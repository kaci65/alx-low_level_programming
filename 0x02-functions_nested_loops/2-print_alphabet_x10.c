#include <stdio.h>
#include "holberton.h"
/**
* print_alphabet_x10 - alphabet in lowercase ten times
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
