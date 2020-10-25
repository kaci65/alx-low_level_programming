#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: number of arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int num, character;
	double num_D;
	char *str;
	char const *print_loop;

	va_list args;

	va_start(args, format);

	for (print_loop = format; *print_loop != '\0'; print_loop++)
	{
		switch (*print_loop)
		{
			case 'i':
				num = va_arg(args, int);
				printf("%i, ", num);
				break;
			case 'c':
				character = va_arg(args, int);
				printf("%c, ", character);
				break;
			case 'f':
				num_D = va_arg(args, double);
				printf("%f, ", num_D);
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str);
				break;
		}
		if (str == NULL)
		{
			printf("(nil)");
		}
	}
}
