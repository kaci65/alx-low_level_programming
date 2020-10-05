#include "holberton.h"
#include <stdio.h>

/**
 * *_memcpy - copies a string
 * @dest: memory area to copy to
 * @src: memory area to copy n bytes from
 * @n: n bytes to be copied from memory area src
 * Return: pointer to memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;

	while (n)
	{
		*(p_dest++) = *(p_src++);
		n--;
	}
	return (p_dest);
}
