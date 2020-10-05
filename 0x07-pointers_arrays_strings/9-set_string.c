#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer that sets value
 * @to: char pointer that replaces @s
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
