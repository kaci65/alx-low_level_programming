#include "holberton.h"

/**
 * is_prime_number - returns 1 if input integer is prime number, else return 0
 * @n: integer to check if prime number
 * Return: Integer
 */
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}

/**
 * find_prime - recursion function to find prime number
 * @num1: integer to divide by itself or 1
 * @i: integer 1
 * Return: Integer
 */

int find_prime(int num1, int i)
{
	if (num1 == i)
	{
		return (1);
	}
	if (num1 % i == 0)
	{
		return (0);
	}
	return (find_prime(num1, (i + 1)));
}
