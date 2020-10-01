#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *rot13 - encodes a string using rot13
 * @s: string to review
 * Return: char
 */
char *rot13(char *s)
{
	int i;
	int j;

	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 51; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
			}
		}
	}
	return (s);
}
