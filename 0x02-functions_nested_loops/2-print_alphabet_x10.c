#include <stdio.h>
#include "holberton.h"
/**
* print_alphabet - alphabet in lowercase ten times
* Return: 0 if successful
*/
void print_alphabet(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
