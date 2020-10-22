#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints mathematical functions
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", op_func(num1, num2));

	return (0);
}
