#include <stdio.h>
#include "holberton.h"
/**
* print_alphabet - alphabet in lowercase
* Return: 0 if successful
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
