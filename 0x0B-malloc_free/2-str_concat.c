#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to be appended to
 * @s2: string to append to @s1
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, index1 = 0, index2 = 0;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[index1])
	{
		index1++;
	}
	while (s2[index2])
	{
		index2++;
	}
	index2++;

	concat_str = malloc((index1 + index2) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (n1 = 0; n1 < index1; n1++)
	{
		concat_str[n1] = s1[n1];
	}
	for (n2 = 0; n2 < index2 + 1; n2++)
	{
		concat_str[index1 + n2] = s2[n2];
	}
	return (concat_str);
	free(concat_str);
}
