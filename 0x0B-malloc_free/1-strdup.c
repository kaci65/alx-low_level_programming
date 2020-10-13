#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - returns a pointer to a newly allocated space
 *                in memory, which contains a copy of the
 *                string given as parameter
 * @str: string to be copied
 *
 * Return: NULL if size == NULL or if unsufficient memory is available
 *         Otherwise - Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int index, n;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	n = 0;
	while (str[n])
	{
		n++;
	}
	n++;

	duplicate = malloc(n * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < n + 1; index++)
	{
		duplicate[index] = str[index];
	}
	return (duplicate);
	free(duplicate);
}
