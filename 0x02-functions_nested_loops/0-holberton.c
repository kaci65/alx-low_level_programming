#include "holberton.h"
/**
*main - print a word string
*Return: 0 if successful
*/
int main(void)
{
	int i;
	char str = "Holberton";

	for (i = 1; i < 9; i++)
		_putchar(str[i]);

	_putchar('\n');

	return (0);
}
