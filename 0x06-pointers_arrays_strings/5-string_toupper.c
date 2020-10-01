#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - changes all lowercase letters of string to uppercase
 * @str: string to change
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
