#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocate_mem = malloc(b);

	if (allocate_mem == NULL)
	{
		exit(98);
	}
	return (allocate_mem);
	free(allocate_mem);
}
