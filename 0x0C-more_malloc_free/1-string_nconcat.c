#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to be appended to
 * @s2: string to append to @s1
 * @n: number of bytes to be allocated
 *
 * Return: NULL on failure
 *         Otherwise - Pointer to concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2;
	char *str_concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	str_concat = malloc(sizeof(char) * (n + len_s1 + 1));

	len_s1 = -1;
	while (s1[++len_s1])
	{
		str_concat[len_s1] = s1[len_s1];
	}

	for (len_s2 = 0; s2[len_s2] && len_s2 < n; len_s2++, len_s1++)
	{
		str_concat[len_s1] = s2[len_s2];
	}

	return (str_concat);
	free(str_concat);
}
