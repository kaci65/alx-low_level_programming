#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *leet - encodes a string into 1337 (leetspeak)
 * @str: string to convert to leet
 * Return: char
 */
char *leet(char *str)
{
	int i;
	int j;

	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (letter[j] != '\0')
		{
			if (str[i] == letter[j])
			{
				str[i] = number[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
