#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: print 0 if no number is passed to the program
 *         1 the program does not receive two arguments and print error
 *         0 if successful
 */
int main(int argc, char *argv[])
{
	int x, y, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
