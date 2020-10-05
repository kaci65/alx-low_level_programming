#include "holberton.h"

/**
 * *_strstr - locates a substring
 * @haystack: containing first occerence of any bytes in @accept
 * @needle: string with bytes to be located
 * Return: Pointer to byte in @haystack that matches one of the
 *         bytes in @needle, Null if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
			while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
