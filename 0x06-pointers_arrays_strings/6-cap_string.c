#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to review
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			i++;
		}
		if (s[i] == 44 || s[i] == 59 || s[i] == 46
		|| s[i] == 33 || s[i] == 63 || s[i] == 34
		|| s[i] == 40 || s[i] == 41 || s[i] == 123
		|| s[i] == 125 || s[i] == 32 || s[i] == '\t'
		|| s[i] == '\n')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
