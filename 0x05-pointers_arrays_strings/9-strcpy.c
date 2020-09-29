#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copies the string from pointer src to pointer dest
 * @dest: pointer char 1
 * @src: pointer char 2
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(*dest, *src);
	putchar(dest);
}
