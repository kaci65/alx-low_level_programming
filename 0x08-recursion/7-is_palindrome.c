#include "holberton.h"

/**
 * is_palindrome - returns 1 if input integer is prime number, else return 0
 * @s: string to check
 * Return: Integer
 */
int is_palindrome(char *s)
{
	return (find_palindrome(s, 0));
}

/**
 * str_length - returns the length of a string
 * @s: receives variable s location
 * Return: length of string of int
 */

int str_length(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * find_palindrome - recursion function to check palindrome
 * @s: string to check
 * @begin: start of string
 * @end: end of string
 * Return: Integer
 */

int find_palindrome(char *s, int begin, int end)
{
	if (s[begin] != s[end])
	{
		return (0);
	}
	if (length == 0)
	{
		return (1);
	}
	if (s[begin] == s[end])
	{
		return (1);
	}
	if (s < end + 1)
	{
		return (find_palindrome(s, begin + 1, end - 1));
	}
}
