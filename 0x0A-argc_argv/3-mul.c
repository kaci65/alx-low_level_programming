#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if program receives two arguments
 *         1 if the program does not receive two arguments
 *         and print error
 */
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);
	return (0);
}
