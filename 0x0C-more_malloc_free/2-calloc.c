#include <stdlib.h>
#include "holberton.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: byte size of each element
 *
 * Return: NULL on failure
 *         Otherwise - Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr_elem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr_elem = malloc(size * nmemb);

	if (arr_elem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		arr_elem[i] = 0;
	}
	return (arr_elem);
	free(arr_elem);
}
