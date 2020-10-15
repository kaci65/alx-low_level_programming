#include <stdlib.h>
#include "holberton.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to be appended to
 * @s2: string to append to @s1
 * @n: number of bytes to be allocated
 * Return: NULL on failure
 *         Otherwise - Pointer to concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;
	len2++;

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * n + (len1 + 1));

	if (str == NULL)
		return (NULL);

	len1 = -1;
	while (s1[++len1])
	{
		str[len1] = s1[len1];
	}

	for (len2 = 0; s2[len2] && len2 < n; len2++, len1++)
	{
		str[len1] = s2[len2];
	}
	return (str);
	free(str);
}
