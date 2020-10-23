#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameters passed to function
 * @...: number of arguments
 * Return: 0 if n == 0, else sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_arguments;
	unsigned int sum = 0, index;

	va_start(sum_arguments, n);

	for (index = 0; index < n; index++)
	{
		if (n == 0)
		{
			return (0);
		}

		sum = sum + va_arg(sum_arguments, int);
	}
	va_end(sum_arguments);

	return (sum);
}
