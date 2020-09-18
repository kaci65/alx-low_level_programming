#include <stdio.h>
/**
* main - numbers of base 16 in lowercase
* Return: 0 if successful
*/
int main(void)
{
	char letter;
	char number;

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	/* print numbers */
		for (number = '0'; number <= '9'; number++)
		{
			putchar(number);
		}
		putchar('\n');

	return (0);
}
