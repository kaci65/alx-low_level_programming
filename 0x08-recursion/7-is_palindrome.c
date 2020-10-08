#include "holberton.h"

/**
 * is_palindrome - returns 1 if input integer is prime number, else return 0
 * @s: string to check
 * Return: Integer
 */
int is_palindrome(char *s)
{
	int length;

	length = str_length(s);

	return (find_palindrome(s, length));
}

/**
 * str_length - returns the length of a string
 * @s: receives variable s location
 * Return: length of string of int
 */

int str_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + str_length(s + 1));
}

/**
 * find_palindrome - recursion function to check palindrome
 * @s: string to check
 * @index: iterate through string using @index
 * Return: Integer
 */

int find_palindrome(char *s, int index)
{
	if (!(*s))
	{
		return (1);
	}
	if (*s != *(s + index - 1))
	{
		return (0);
	}
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		find_palindrome(s, (index + 1));
		return (1);
	}
}
