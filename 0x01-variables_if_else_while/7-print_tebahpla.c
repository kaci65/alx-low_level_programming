#include <stdio.h>
/**
* main - alphabet in lowercase in reverse
* Return: 0 if successful
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}