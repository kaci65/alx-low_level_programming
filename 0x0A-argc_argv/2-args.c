#include <stdio.h>
#include "holberton.h"

/**
 * main - prints it name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
