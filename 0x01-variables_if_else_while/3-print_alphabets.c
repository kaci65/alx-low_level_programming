#include <stdio.h>
/**
* main - alphabet in lowercase and uppercase
* Return: 0 if successful
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/* print uppercase letters */
		for (ch = 'A'; ch <= 'Z'; ch++)
		{
			putchar(ch);
			putchar('\n');
		}

	return (0);
}
