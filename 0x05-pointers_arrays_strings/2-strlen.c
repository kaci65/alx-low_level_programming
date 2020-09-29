#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: receives variable s location
 * Return: length of string of int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		_putchar(len);
		len++;
	}
}
