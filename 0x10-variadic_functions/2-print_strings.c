#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * @...: number of arguments
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int index;
	char *my_str;

	va_start(str_list, n);

	for (index = 0; index < n; index++)
	{
		my_str = va_arg(str_list, char*);

		if (my_str == NULL)
			printf("(nil)");
		else
		{
			if (index < (n - 1) && separator != 0)
				printf("%s%s", my_str, separator);
			else
				printf("%s", my_str);
		}
	}
	printf("\n");

	va_end(str_list);
}
