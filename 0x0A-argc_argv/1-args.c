#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: unused argument vector
 * Return: Integer
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc--);
	return (0);
}
