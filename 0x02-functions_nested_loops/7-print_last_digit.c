#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: value to be checked
 *Return: value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i >= 0)
	{
		_putchar('0' + i);
	}
	else
	{
		i = i * -1;
		_putchar('0' + i);
	}
	return (i);
}
