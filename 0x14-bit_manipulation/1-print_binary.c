#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1) /* if true push on stack */
	{
		print_binary(n >> 1);
		/**
		 * recursively call n while shifting bits of n to the right
		 * by 1 position
		 */
	}
	if ((n & 1) == 0)
		_putchar('0');
	if ((n & 1) == 1)
		_putchar('1');
	/* result of AND (&) is 1 if both bits are 1 else 0 */
}
